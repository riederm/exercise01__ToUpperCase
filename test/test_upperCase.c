#include "vendor/unity.h"
#include <stdlib.h>
#include <string.h>

void toUpperCase(char* text);

char* test(char* text){
  char* newString = malloc(strlen(text)*sizeof(char)+1);
  strcpy(newString, text);
  toUpperCase(newString);
  return newString;
}

void test_EmptyString(void)
{
  char* text = test("a");
  TEST_ASSERT_EQUAL_STRING("A", text);
  free(text);
}

int main(void)
{
   UnityBegin("toUpperCase");

   RUN_TEST(test_EmptyString);

   UnityEnd();
   return 0;
}
