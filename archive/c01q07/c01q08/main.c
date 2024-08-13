// ----------------------------------------------------------------------------
// Filename:   main.c
// Programmer: James Doyle
//
// Purpose:    Used a template file.
//
// Tracker:  
//	08/XX/2024	Initial Commit
//	
//
// ----------------------------------------------------------------------------

#include <stdio.h>

int main( void) {
#include <string.h>

    char *name = "James";
    printf("Start of the application.  Name: %s", name);

    strcpy(name, "test");
    printf("Start of the application.  test: %s", name);
}

