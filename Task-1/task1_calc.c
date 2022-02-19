#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <calc.h>

int main(int argc, char **argv){

  /*************************************************************
   write code for the main process that will establish
   the communication channel between cleint and server using
   pipes
  *************************************************************/

  pid_t pid;
  char buf[40];
  char input[40] = "Avinash is great";
  char *pointers = input;

  int fd[2];

  if (pipe(fd) < 0){
    perror("pipe");
    exit(-1);
  }

  // TODO:

  pid = fork();

  if(pid < 0){
    perror("Fork failed\n");
    exit(-1);
  }

  if(!pid){ // Child process - Server

    // TODO:
    //call to server here: server(int readfd, int writefd);
    server(fd[0], fd[1]); 

    wait(0);

  }

  // TODO:  
  //call to client here client(int readfd, int writefd);
  // Parent process is the client

    client(fd[0], fd[1]);
    wait(0);
}
