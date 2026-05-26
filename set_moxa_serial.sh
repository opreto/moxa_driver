#!/usr/bin/env bash
# Configure a MOXA MUE tty (e.g. ttyMUE0): hardware interface + line discipline.
#
# Why both muestty and stty?
#   muestty -i   Sets transceiver / CPLD mode (RS-232, RS-422, RS-485) on the board.
#   stty         Sets kernel UART baud and framing (8N1, raw, flow control).
#   muestty -g   Read-only; confirms interface / terminator (optional).
#
# After stty, the script always runs: stty -F <device> speed (verify baud).
#
# Usage:
#   sudo ./set_moxa_serial.sh /dev/ttyMUE0 921600
#   sudo ./set_moxa_serial.sh /dev/ttyMUE1 115200 --intf RS422 --flow none
#   sudo ./set_moxa_serial.sh /dev/ttyUSB0 921600 --stty-only   # non-Moxa device
#
# Options:
#   --intf RS232|RS422|RS4852W|RS4854W   (default RS422; omit muestty with --stty-only)
#   --flow none|rtscts|xon               (stty flow control; default none)
#   --no-verify                          Skip muestty -g at the end
#   --stty-only                          Only run stty (no muestty)
#
set -euo pipefail

usage() {
	sed -n '2,/^$/s/^# \{0,1\}//p' "$0" | head -35
	exit "${1:-0}"
}

DEVICE=""
BAUD=""
FLOW="none"
INTF="RS422"
STTY_ONLY=0
VERIFY=1

while [[ $# -gt 0 ]]; do
	case "$1" in
	-h | --help) usage 0 ;;
	--flow)
		shift
		[[ $# -gt 0 ]] || usage 1
		FLOW="$1"
		shift
		;;
	--intf)
		shift
		[[ $# -gt 0 ]] || usage 1
		INTF="$1"
		shift
		;;
	--stty-only)
		STTY_ONLY=1
		shift
		;;
	--no-verify)
		VERIFY=0
		shift
		;;
	--)
		shift
		break
		;;
	-*)
		echo "Unknown option: $1" >&2
		usage 1
		;;
	*)
		if [[ -z "$DEVICE" ]]; then
			DEVICE="$1"
		elif [[ -z "$BAUD" ]]; then
			BAUD="$1"
		else
			echo "Too many arguments." >&2
			usage 1
		fi
		shift
		;;
	esac
done

[[ -n "$DEVICE" && -n "$BAUD" ]] || usage 1

[[ -e "$DEVICE" ]] || {
	echo "Device not found: $DEVICE" >&2
	exit 1
}

[[ "$BAUD" =~ ^[0-9]+$ ]] || {
	echo "Baud must be a positive integer: $BAUD" >&2
	exit 1
}

case "$INTF" in
RS232 | RS422 | RS4852W | RS4854W) ;;
*)
	echo "Invalid --intf: $INTF (use RS232|RS422|RS4852W|RS4854W)" >&2
	exit 1
	;;
esac

need_root() {
	if [[ "${EUID:-0}" -ne 0 ]]; then
		echo "This step needs root (example: sudo $0 …)" >&2
		exit 1
	fi
}

MUESTTY=""
if command -v muestty >/dev/null 2>&1; then
	MUESTTY="$(command -v muestty)"
fi

if [[ "$STTY_ONLY" -eq 0 ]]; then
	need_root
	[[ -n "$MUESTTY" ]] || {
		echo "muestty not found in PATH (install Moxa utilities / copy from mxser/utility)." >&2
		exit 1
	}
	echo "==> muestty -i $INTF $DEVICE"
	"$MUESTTY" -i "$INTF" "$DEVICE"
fi

if [[ ! -r "$DEVICE" || ! -w "$DEVICE" ]]; then
	echo "Need read/write access to $DEVICE (try: sudo $0 …)" >&2
	exit 1
fi

STTY_ARGS=(
	-F "$DEVICE"
	"$BAUD"
	cs8
	-parenb
	-cstopb
	raw
	-echo
)

case "$FLOW" in
none | off)
	STTY_ARGS+=(-ixon -ixoff -crtscts)
	;;
rtscts | hw)
	STTY_ARGS+=(-ixon -ixoff crtscts)
	;;
xon | sw | xonxoff)
	STTY_ARGS+=(ixon ixoff -crtscts)
	;;
*)
	echo "Invalid --flow: $FLOW (use none|rtscts|xon)" >&2
	exit 1
	;;
esac

echo "==> stty ${STTY_ARGS[*]}"
stty "${STTY_ARGS[@]}"

echo "==> verify: stty -F \"$DEVICE\" speed"
stty -F "$DEVICE" speed
echo "OK: $DEVICE configured (8N1, raw, flow=$FLOW)"

if [[ "$STTY_ONLY" -eq 0 && "$VERIFY" -eq 1 ]]; then
	need_root
	echo "==> muestty -g $DEVICE"
	"$MUESTTY" -g "$DEVICE"
fi
