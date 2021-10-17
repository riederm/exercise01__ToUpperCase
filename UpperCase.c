#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * add doc here
*/
void toUpperCase(char* text){
  //TODO
}

void test(char* text){
  char* newString = malloc(strlen(text)*sizeof(char)+1);
  strcpy(newString, text);
  toUpperCase(newString);
  printf("%s --> %s\n", text, newString);
  free(newString);
}

int main(int argc, char const *argv[]) {
  test("xyz");
  
  return 0;
}
