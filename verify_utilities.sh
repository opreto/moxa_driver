for x in msdiag msmon msterm muestty; do
  command -v "$x" && ls -l "$(command -v "$x")"
done

