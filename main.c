#include "string_utils.h"

int main() {
  const char* str = "This is a test string";
  const char* ptrString = str;

  printString(ptrString, STRING);
  printString(str, STRING);
  printString(ptrString, POINTER);
  // printString(&str, POINTER);
  // printString(&ptrString, POINTER);

  return 0;
}