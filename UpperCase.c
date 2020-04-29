#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// hallo abc XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
 
/*
 * turns the given String into upper-case characters
*/
void toUpperCase(char* text){
    for(long unsigned int i = 0; i < strlen(text)*sizeof(char); ++i){
        if (text[i] >= 'a' && text[i] <= 'z'){
                text[i] = text[i] - ('a'-'A');
        }
    }
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
  test("yay i see a lot of capital letters");
  
  return 0;
}
