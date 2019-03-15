#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * turns the given String into upper-case characters
*/
void toUpperCase(char* text){
  while(*text != '\0'){
    if (*text >= 'a' && *text <= 'z'){
        *text = *text + 'A'-'a';
    }
    text++;
  }
}

