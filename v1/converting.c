// CONVERTING MODULE SOURCE
/*
    This program demonstrates converting strings to integers.
    It prompts the user to enter numeric strings until 'q' is entered to quit.
    Each string entered is converted to an integer using the atoi function and displayed.
*/


// Define preprocessor directive to suppress warnings related to secure functions in Visual Studio
#define _CRT_SECURE_NO_WARNINGS

// Define buffer size for storing user input
#define BUFFER_SIZE 80

// Include header file for the converting functionality
#include "converting.h"
// V1
void converting (void) {
    // print introduction to converting function
    printf ("*** Start of Converting Strings to int Demo ***\n");
    // buffer to store user input
    char intString[BUFFER_SIZE];
    int intNumber;
    // loop until user enters 'q' to quit
    do {
        // prompt user to type a numeric string
        printf ("Type an int numeric string (q - to quit):\n");
        // get user input
        fgets(intString, BUFFER_SIZE, stdin);
        // remove newline character from the input
        intString [strlen(intString) - 1] = '\0';
        // if user doesn't enter 'q', convert the string to an integer and display
        if (strcmp(intString, "q") != 0) {
            intNumber = atoi(intString);
            printf ("Converted number is %d\n", intNumber);
        }
} while (strcmp(intString, "q") != 0);
printf("*** End of Converting Strings to int Demo ***\n\n");

}
