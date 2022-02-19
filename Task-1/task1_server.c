#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <calc.h>

void server(int readfd, int writefd){
  /*************************************************************
   write server code to be used by the child process
  *************************************************************/
  char buf[MAX_BUFF];
  size_t len;

    read(readfd, buf, 40);
    // buf[40] = '\0';
    printf("Reading in child: %s", buf);

    calculate (buf);
    
    printf("In Server\n");
    printf("Hello\n");

  /* Implement server functionlity here
    use calculate function to evaluate expression
    signature: calculate(char *buf)
  */
}
