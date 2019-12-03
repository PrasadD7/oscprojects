#! /bin/bash

echo -n "enter file/directory name"; read fname;


if [ ` ls -lh | grep $fname | wc -l` -ne 0 ]; then
	echo " File / Directory does exist ";
else
	echo "File / Directory does NOT exist ";
fi
	if [ ` ls -lh | grep $fname | grep ^d |wc -l` -eq 1 ]; then
	echo "It is a directory";
elif [ ` ls -lh | grep $fname | grep ^- |wc -l` -eq 1 ]; then
	echo "It is a file";
fi
