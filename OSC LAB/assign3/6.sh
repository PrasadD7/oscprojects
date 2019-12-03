#! /bin/bash

fcount=`ls -lh -R| grep -e ^- -c`;
dcount=`ls -lh -R| grep -e ^d -c`;

echo "There are $dcount directories and $fcount files";
