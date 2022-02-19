#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <calc.h>


void client(int readfd, int writefd){
  /*************************************************************
   write client code to be used by the parent process
  *************************************************************/
  char buf[MAX_BUFF];
  size_t len;

    close(1);
    dup(writefd);

    printf("Enter your question:\n");
    fgets(buf, sizeof(buf), stdin);
    write (writefd,buf, 40);

}
