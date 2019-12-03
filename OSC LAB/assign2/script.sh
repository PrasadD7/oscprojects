# SECTION  A 
#1
`mkdir pradnya`
`touch pradnya/{a,b,c}.txt`
`cd pradnya/`
`touch d.sh`
`chmod 700 pradnya/`
`cd pradnya/`
`cat > d.sh`
`cat d.sh`
`bash d.sh`

#2
`chmod 000 pradnya/`
`chmod +x pradnya/`
`ls`
#ls: cannot open directory '.': Permission denied

`./pradnya`
#-bash: ./pradnya: Is a directory

#3
`chmod 000 pradnya/`
`chmod +r pradnya/`

`cd pradnya/`
#-bash: cd: pradnya/: Permission denied

#4
`echo `cd && ls``

#5
`echo `cd && cd /etc/ &&  ls``

#6
`echo ls /etc/*.conf`

#7
`echo prasad >> a.txt`

#8
echo `cd && cd /proc/ && ls  `


#SECTION B

































