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

char *mystrcat( char *dest, char *source){
  char *pointer = dest;
  while (*pointer != '\0'){
    pointer++;
  }
  while(*source != '\0'){
    *pointer = *source;
    source++;
    pointer++;
  }
  return dest;
}

int mystrcmp(char *s1, char *s2) {
    while ((*s1 == *s2) && *s1 != '\0') {
        *s1++;
        *s2++;
    }
    if (*s1 > *s2){
      return 1;
    }
    else if (*s1 < *s2){
      return -1;
    }
    else{
      return 0;
    }
}

char *mystrchr(char *s, char c){
  char *cPointer = s;
  while (*cPointer != c && *cPointer != '\0'){
    cPointer++;
  }
  if (*cPointer == c){
    return cPointer;
  }
  else{
    return '\0';
  }
}

// int main(){
//   // char s1 [5] = "Bnt";
//   // char s2 [5] = "Ant";
//   // char s3 [5] = "Ant";
//   // char s4 [5] = "Ants";
//   // printf("the result of %s vs %s is %d \n",s1,s2,mystrcmp(s1,s2));
//   // printf("the correct result is %d \n",strcmp(s1,s2));
//   // printf("the result of %s vs %s is %d \n",s2,s1,mystrcmp(s2,s1));
//   // printf("the correct result is %d \n",strcmp(s2,s1));
//   // printf("the result of %s vs %s is %d \n",s2,s3,mystrcmp(s2,s3));
//   // printf("the correct result is %d \n",strcmp(s2,s3));
//   // printf("the result of %s vs %s is %d \n",s2,s4,mystrcmp(s2,s4));
//   // printf("the correct result is %d \n",strcmp(s2,s4));
// }
