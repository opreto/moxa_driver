savedcmd_mxser.mod := printf '%s\n'   mxser.o | awk '!x[$$0]++ { print("./"$$0) }' > mxser.mod
