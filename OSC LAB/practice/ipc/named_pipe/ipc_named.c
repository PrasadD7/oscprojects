#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(){

	int fifoid=0,fid;
	char str[100];
	pid_t pid;
	if(pid < 0){
	printf("Error in fork()");
	return -1;
	}
	if(pid > 0){
	printf("\nInside Parent");
	int fid  = open("mypipe",O_WRONLY);
	printf("\nEnter data to be written ::>");
	fgets(str,10,stdin);
	write(fid,str,sizeof(str));
	close(fid);
	}
	if(pid == 0){
	int fid = open("mypipe",O_RDONLY);
	printf("Data read from pipe");
	read(fid,str,strlen(str));
	printf("%s",str);
	}

return 0;
}
