#include <stdio.h>
#include "string_utils.h"

// Function declaration

// Function definition
void printString_Format(const char *ptrChar, PrintFormat format) {
  if (format == STRING) {
    printf("%s\n", ptrChar);
  } else if (format == POINTER) {
    printf("%p\n", ptrChar);
  }
}

void printString(const char *ptrChar) {
  printString_Format(ptrChar, STRING);
}

// Internal function definition
