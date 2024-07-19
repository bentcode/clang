#include <stdio.h>

// Function declaration
typedef enum {STRING, POINTER} PrintFormat;

void printString(const char *ptrChar);

void printString_Format(const char *ptrChar, PrintFormat format);
