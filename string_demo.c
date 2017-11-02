#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  /* demo 1: strcpy
  copies the string pointed to by s2 into the object pointed to by s1
  strcpy(char *s1, char *s2)
  s1 - array where s2 will be copied to, s2 - string to be copied */


  char s1[256];
  printf("\nTesting out strcpy...\n");
  printf("copying 'tom brady' into an empty string and returning that string\n");
  strcpy(s1, "tom brady"); //would return s1
  printf("%s\n", s1); //should return "tom brady"


  /* demo 2: strncpy
  copies up to n characters from the string pointed to by string2 to string1
  strncpy(char *s1, char *s2, n)
  s1 - array where s2 will be copied to, s2 - string to be copied
  n - number of characters to copy */

  char s2[256];
  printf("\nTesting out strncpy... \n");
  printf("copying the first 4 chars of 'peyton manning' into an empty string and returning that string\n");
  strncpy(s2, "peyton manning", 4);
  printf("%s\n", s2); //should return "peyt"

}
