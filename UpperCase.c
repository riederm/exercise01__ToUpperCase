#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>

// hallo abc zzzzzz
 
/*
 * turns the given String into upper-case characters
*/
void toUpperCase(char* text){
    u_int8_t i = 0;
    while (text[i] != '\0'){
        if ((text[i] > 96) && (text[i] < 123)){     //if ASCII code equals lowercase character
            text[i] = text[i] - 32;                 //convert to uppercase
        }
        i++;
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
  
  return 0;
}
