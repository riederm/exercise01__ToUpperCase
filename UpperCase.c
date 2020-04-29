#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// hallo abc XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
 
/*
 * turns the given String into upper-case characters
*/
void toUpperCase(char* text){
    int len = strlen(text);
    for(int i = 0; i < len; i++){
        if(*(text+i)>='a' && *(text+i)<='z'){
            *(text+i)= *(text+i) - ('a'-'A');
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

  test("hello world");
  test("this is a test");
  
  return 0;
}
