#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

struct msg{
long id;
char str[80];
};

void main(){
int mqid,mqstatus;
char arr[20];
key_t key;
key = ftok("/home/prasad/CDAC/OSConcepts/OSC LAB/assign7",1);
mqid = msgget(key, 0666|IPC_CREAT);
//by default set message size to be 20
struct msg m;
while(1){
printf("Enter message to be sent ::>");
m.id = 7;
fgets(m.str,20,stdin);

mqstatus = msgsnd(mqid,m.str,20,0200);
if(mqstatus == -1){
printf("Error inserting message in message queue !!!");
return;
}
printf("Message inserted in message queue SUCCESSFULLY !!!");
}
}
