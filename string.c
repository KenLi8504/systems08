#include <stdio.h>
int mystrlen(char *s);

int mystrlen(char *s){
  int counter = 0;
  while (*(s) != '\0'){
    s++;
    counter++;
  }
  return counter;
}

int main(){
  char test[20] = "Hello";
  printf("The length of test is %d \n", mystrlen(test));
  return 0;
}
