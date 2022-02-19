#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <calc.h>


double calculate(char *buf){

  /*************************************************************
   Implement the expression evaluation functionality which
   will be invoked by the server whenever required.
  *************************************************************/

  double operands[20];
  char op[20];
  int oprnInd = 0;
  double result = 0.0;

  printf("In Calculate\n");
  printf("%s\n", buf);


  int a;
  int i = 0;

  for (a=0; a<=40; a = a +2) {
    operands[i] = buf[a];
    i = i + 1;
  }
  printf("%p\n", operands);

  // implement expression evaluation functionality here

  return(result);
}