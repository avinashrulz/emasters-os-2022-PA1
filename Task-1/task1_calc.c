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
  int fd[2];

  if (pipe(fd) < 0){
    perror("pipe");
    exit(-1);
  }

  // TODO:

  pid = fork();

  if(pid < 0){
    perror("Fork failed\n");
    return 1;
  }

  if(pid == 0){

    //Close write end of pipe in chile process
    close(fd[1]); 

    //close standard input in child process
    close(0); 

    //Now fd[0] is the standard input after this duplicate
    dup(fd[0]);

    // TODO:

    //call to server here: server(int readfd, int writefd);
    
    server(0, 1);
    exit(0);
  }

  // TODO:
  
  //call to client here client(int readfd, int writefd);

//Close read end of pipe in chile process
    close(fd[0]); 

    //close standard output in child process
    close(1); 

    //Now fd[1] is the standard output after this duplicate
    dup(fd[1]);

    client(0, 1);


  return 0;
}
