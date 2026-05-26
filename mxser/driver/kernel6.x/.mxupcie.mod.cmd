savedcmd_mxupcie.mod := printf '%s\n'   mxpcie.o ../CPLD/Source/cpld.o ../CPLD/Source/gpio.o | awk '!x[$$0]++ { print("./"$$0) }' > mxupcie.mod
