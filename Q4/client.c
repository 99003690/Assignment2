#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

// structure for message queue
struct msg_buffer 
{
   long message_type;
   char text_message[100];
} message;

int main() 
{
   key_t my_key;
   int msg_id;
   my_key = ftok("progfile", 65); //create unique key
   
   msg_id = msgget(my_key, 0666 | IPC_CREAT); //create message queue and return id
   message.message_type = 1;

   printf("Write Message : ");
   fgets(message.text_message, 100, stdin);

   printf("Sent message is : %s \n", message.text_message);

   msgsnd(msg_id, &message, sizeof(message), 0); //send message
   
   msgrcv(msg_id, &message, sizeof(message), 1, 0); //used to receive message
   
   // display the message
   printf("Received Message is : %s \n", message.text_message);

   return 0;
}
