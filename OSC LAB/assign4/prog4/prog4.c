#include<stdio.h>
#include<unistd.h>
int main(){
	pid_t pid;
	int i;
	for(i=0;i<5;i++){
	pid=fork();
	if(pid<0){
	printf("\nFork failed");
	}

	if(pid==0){
		if(i==0){
		execl("/usr/bin/gcc","gcc","-c","/home/prasad/CDAC/OSConcepts/OSC LAB/assign4/prog4/files/file1.c",NULL);
		}
		if(i==1){
		execl("/usr/bin/gcc","gcc","-c","/home/prasad/CDAC/OSConcepts/OSC LAB/assign4/prog4/files/file2.c",NULL);
		}
		if(i==2){
		execl("/usr/bin/gcc","gcc","-c","/home/prasad/CDAC/OSConcepts/OSC LAB/assign4/prog4/files/file3.c",NULL);
		}
		if(i==3){
		execl("/usr/bin/gcc","gcc","-c","/home/prasad/CDAC/OSConcepts/OSC LAB/assign4/prog4/files/file4.c",NULL);
		}
		if(i==4){
		execl("/usr/bin/gcc","gcc","-c","/home/prasad/CDAC/OSConcepts/OSC LAB/assign4/prog4/files/file5.c",NULL);
		}
	}
	}
	if(pid>0)
	{
		execl("gcc","gcc","file1","file2","file3","file4","file5","-o","linked",NULL);
	}
return 0;
}
