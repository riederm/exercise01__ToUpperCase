#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// hallo i´m pa
 
/*
 * turns the given String into upper-case character
*/
void toUpperCase(char* text){
}

void test(char* text){
  char* newString = malloc(strlen(text)*sizeof(char)+1);
  strcpy(newString, text);
  toUpperCase(newString);
  printf("%s --> %s\n", text, newString);
}


int main(int argc, char const *argv[]) {

  test("xyz");
  test("this is a test");
  
  return 0;
}
