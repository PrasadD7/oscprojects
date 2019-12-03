#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void main(){
pid_t pid;
pid = fork();
if(pid<0){
printf("Fork has failed !");
}
if(pid==0){
printf("In Child....");

}
else{
printf("In parent...\nParent is sleeping now");
sleep(10);
printf("\nParent got back");
}

}
