#include<stdio.h>
#include<signal.h>
void *handler(int no){
switch(no){
	case 2:
		printf("SIGINT signal is raised");
		break;
	case 3:
		printf("SIGQUIT signal is raised");
		break;
	case 15:
		printf("SIGTERM signal is raised");
		break;
	case (18||20||24):
		printf("SIGTSTP signal is raised");
		break;
}
}
int main(){
	int i=0;
	struct sigaction s[4];
	memset(&s,0,sizeof(struct sigaction));
	for(i=0;i<4;i++){
	s[i].sa_handler=handler;
	}
	sigaction(SIGINT,&s[0],(void*)0);
	sigaction(SIGQUIT,&s[1],(void*)0);
	sigaction(SIGTERM,&s[2],(void*)0);
	sigaction(SIGTSTP,&s[3],(void*)0);
	i=0;
	while(1){
	sleep(1);
	printf("\n%d",i++);
	}
return 0;
}
