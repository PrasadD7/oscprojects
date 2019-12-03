#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>
void main(){
pid_t pid,childpid;
int fd[2];
char str1[100],str2[100];
int ret = pipe(fd);
if(ret<0){
printf("Error creating pipe!");
}
pid = fork();
if(pid<0){
printf("\nError creating child");
}
if(pid==0){
//Inside child
close(fd[0]); //pipe closed for reading
childpid= getpid();
printf("Enter string to be written to the pipe");
fgets(str1,100,stdin);
write(fd[1],str1,strlen(str1)+1);
close(fd[1]);
}
if(pid>0)
{
	int status;
	//Inside parent
	sleep(5);
	waitpid(childpid,&status,NULL);
	printf("Child killed, status = %d",status);
	close(fd[1]);//pipe closed for writing
	read(fd[0],str2,sizeof(str2));
	printf("\nData resturned by parent:\n %s",str2);

	close(fd[0]);
}
}
