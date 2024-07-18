#include <stdio.h>

// Function declaration
typedef enum {STRING, POINTER} PrintFormat;

void printString(const char *myptr);
void printString(const char *myptr, PrintFormat format);
