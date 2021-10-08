#include <stdio.h>
#include <string.h>
int mystrlen(char *s);
char *mystrncpy( char *dest, char *source, int n);
char *mystrcat( char *dest, char *source);
int mystrcmp( char *s1, char *s2 );
char *mystrchr(char *s, char c);

int mystrlen(char *s){
  int counter = 0;
  while (*(s) != '\0'){
    s++;
    counter++;
  }
  return counter;
}

char *mystrncpy(char *dest, char *source, int n){
  int counter = 0;
  while(*source != '\0' && counter < n){
    *dest = *source;
    dest++;
    source++;
    counter++;
  }
  while (counter < n){
    *dest = '\0';
    counter++;
  }
  return dest-counter;
}

int main(){
  // char test[20] = "Hello";
  // printf("The length of test is %d \n", mystrlen(test));
  char test[10] = "Hello";
  char test2[6] = "World";
  //printf("The result is, %s \n",strncat(test,test2,2));
  printf("The copy is %s \n", mystrncpy(test,test2,2));
  printf("The correct one is %s \n", strncpy(test,test2,2));
  return 0;
}
