s()
{
  du -hL $arg | cut -f 1
}
read -p $'enter file name: \n' arg
s
