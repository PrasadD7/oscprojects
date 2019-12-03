#1
#a::to list files rowwise : 
`ls`

#to list files columnwise : 
`ls -1`



#b::to list files in ascending order of their names : 
`ls`


#to list files in descending order of their names : 
`ls -r`

#c::to create hidden directory : 
 `mkdir  .hiddendir`
# to create hidden file : 
 `touch .hiddenfile`

#d::
`ls -l`

`-rwxr-xr-x 1 dac dac 21244 Oct  2 12:13 prasad` #previous timestamp


`touch prasad`

`ls -l`

`-rwxr-xr-x 1 dac dac 21244 Oct  2 12:42 prasad` #timestamp after touch


#change timestamp explicitly

`touch -t 201901011111.11 prasad`

#e::to recursively display contents
`ls -R`

#f::display all attributes of files and directories using ls -l
ls -l

#g::display attributes of a directory using ls -ld
$ ls -ld prasad



#2 
`mkdir a b c`
`touch a/a.txt b/b.txt c/c.txt` 
#3
`mv b c`

#4 Create alias of ls -lh command to your name.

`alias prasad='ls -lh'`


#5 Change Directory name a to cdac.

`mv a cdac`

#6 Create five files file1.txt , file2.txt ,file3.txt file4.txt and
#  file5.txt with some text inside it. Search for 's' character
#  inside all the files using grep command.
#  Also Use cat to view all file content together.

`touch file{1,2,3,4,5}.text`
`grep s file{1,2,3,4,5}.txt`
`cat file{1,2,3,4,5}.txt`




#7 Create file.txt using cat and edit that using nano editor.

`cat> file.txt`
`nano file.txt`


#8 Create 5 empty files using touch command.

`touch f{1,2,3,4,5}.txt`


#9 Remove previously created directory a , b and c.

`rm -r c cdac`

#10 Explore the following commands with various options, refer man pages for
#further help a) date b) cal c) bc d) echo e) who f) whoami g) logname g) uname h)
#seq i) clear

#a>


`date +%a`
#Thu
`date +%A`
#Thursday
`date +%B `
#`October
`date +%b` 
#Oct
`date +%C `
#20
`date +%c`
#Thursday 03 October 2019 11:28:25 AM IST
`date +%d`
#03
`date +%D`
#10/03/19


#b>

`cal` #display current month

`cal -m 'July'` #display specified month

`cal -y 2024` #display specified year


#c> 
`bc` #perform any arithmatic,logical, relational operation

#d> 
`echo"Welcome to shell !"` #Prints on terminal


#e>
`who` 
#dac      :0           2019-10-03 10:44 (:0)   ::> displays username, date and login time
					
#f>
`whoami`
#shows username

#g>
`logname`
#shows logged in username

#h
`uname`            # print system information

#i
`clear`            # clear the terminal screen



#Create a file with some content using vi editor
#a) Display the file using cat command
#b) Display line no.s along with content
#c) Display the file in reverse order using tac
#d) Combine multiple files using cat command

`vi newfile.txt`

#a)
`cat newfile.txt`

#bfs dfs
#bfs dfs
#bfs dfs 10 times.....

#b)
`vi newfile.txt`
#set nu 
  1 bfs dfs
  2 bfs dfs
  3 bfs dfs 10 times....

#c)  
`tac newfile.txt`
bfs dfs 10 times.....
bfs dfs
bfs dfs

#d)

`cat newfile.txt file.txt`
#bfs dfs                      
#bfs dfs
#bfs dfs 10 times.....   #newfile.txt ends here
#popo			#file.txt starts here
#scjbd










