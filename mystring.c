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

int mystrcmp(char *s1, char *s2) {
    char *cs1 = s1;
    char *cs2 = s2;
    while ((*cs1 == *cs2) && *cs1 != '\0') {
        cs1++; cs2++;
    }
    if (*cs1 > *cs2){
      return 1;
    }
    if (*cs1 < *cs2){
      return -1;
    }
    else{
      return 0;
    }
}

int main(){
  // char test[20] = "Hello";
  // char s1 [5] = "Bnt";
  // char s2 [5] = "Ant";
  // char s3 [5] = "Ant";
  // char s4 [5] = "Ants";
  // printf("the result of %s vs %s is %d \n",s1,s2,mystrcmp(s1,s2));
  // printf("the correct result is %d \n",strcmp(s1,s2));
  // printf("the result of %s vs %s is %d \n",s2,s1,mystrcmp(s2,s1));
  // printf("the correct result is %d \n",strcmp(s2,s1));
  // printf("the result of %s vs %s is %d \n",s2,s3,mystrcmp(s2,s3));
  // printf("the correct result is %d \n",strcmp(s2,s3));
  // printf("the result of %s vs %s is %d \n",s2,s4,mystrcmp(s2,s4));
  // printf("the correct result is %d \n",strcmp(s2,s4));
}