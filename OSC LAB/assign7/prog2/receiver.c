#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

struct msg {
           long id;
           char str[80];
       };

void main(){
int mqid,mqstatus;
char arr[20];
struct msg m;
key_t key;
key = ftok("/home/prasad/CDAC/OSConcepts/OSC LAB/assign7",1);
mqid = msgget(key,IPC_CREAT | 0666);
m.id = 7;
msgrcv(mqid,&m,sizeof(m),7,0);
printf("Message Received from Message queue is %s",m.str);
return;
}

