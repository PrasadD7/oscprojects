 res=`ps -e -o pid,ppid,cmd,stat | grep '+'`;
 echo "List of foreground processes";
 echo "$res"
