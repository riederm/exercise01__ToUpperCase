#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * turns the given String into upper-case characters
*/
void toUpperCase(char* text){
  //TODO fsafsdfdsfsdaafsfa
}

void test(char* text){
  char* newString = malloc(strlen(text)*sizeof(char)+1);
  strcpy(newString, text);
  toUpperCase(newString);
  printf("%s --> %s\n", text, newString);
}


int main(int argc, char const *argv[]) {
  test("abc");
  test("hello World");
  test("");
  test("1 two 3 four five 6");
  return 0;
}
