#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// hallo

/*
 * turns the given String into upper-case characters
*/
void toUpperCase(char* text){
    // find the delta for the ascii-code and add/subtract it
}

void test(char* text){
  char* newString = malloc(strlen(text)*sizeof(char)+1);
  strcpy(newString, text);
  toUpperCase(newString);
  printf("%s --> %s\n", text, newString);
}


int main(int argc, char const *argv[]) {
  test("this is a test");
  
  return 0;
}
