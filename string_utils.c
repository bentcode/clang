#include <stdio.h>
#include "string_utils.h"

// Function declaration
void internalFunction();

// Function definition
void printString(const char *str, PrintFormat format) {
  if (format == STRING) {
    printf("%s\n", str);
  } else if (format == POINTER) {
    printf("%p\n", str);
  }
  internalFunction();
}

void printString(const char *str) {
  printString(str, STRING);
}

// Internal function definition
void internalFunction() {
  printf("   This is an internal function\n");
}
