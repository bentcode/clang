#include "string_utils.h"

int main() {
  char *str = "This is a test string";
  char **ptr2str = &str;

  printf("char *str = %p \n", str);
  printf("char *ptr2str = %p \n", ptr2str);

  // printf("This is constant char pointer");
  // printString_Format(str, STRING);

  // printf("This is a pointer to a pointer");
  // printString_Format(ptr2str, STRING);

  // printf("This is a test string");
  // printString_Format(str, STRING);
  // printString_Format(ptr2str, POINTER);
  // printString_Format(str, POINTER);
  // printString_Format(ptr2str, POINTER);

  return 0;
}