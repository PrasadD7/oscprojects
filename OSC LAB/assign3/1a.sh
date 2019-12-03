echo "Number of Running Processes are"
echo `ps -e -o pid,ppid,cmd,stat | grep 'R' | wc -l`
