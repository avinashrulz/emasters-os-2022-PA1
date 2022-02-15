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

  // TODO:

  pid = fork();

  if(pid < 0){
    perror("Fork failed\n");
    return 1;
  }

  if(pid == 0){

    // TODO:

    //call to server here: server(int readfd, int writefd);
    exit(0);
  }

  // TODO:
  
  //call to client here client(int readfd, int writefd);


  else {
if (write(fd[1], "Hello pipe\n", 11) != 11) {
perror("write");
exit (-1);
}
exit(0);
}



  return 0;
}
