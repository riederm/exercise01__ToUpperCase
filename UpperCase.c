#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdint.h>

// hallo abc XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
 
/*
 * turns the given String into upper-case characters
*/
void toUpperCase(char* text){
    uint8_t i =0; 
    while (text[i] != '\0'){                    //loop until EOS
        if(text[i] >= 97 && text[i] <= 122){    //check for small letter
            text[i] -= 32;                      //convert to Capital
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
