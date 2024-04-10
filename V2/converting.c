// CONVERTING MODULE SOURCE
#define CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

// V2

void converting (void) {
    
    printf ("*** Start of Converting Strings to double Demo ***\n");
    char doubleString[BUFFER_SIZE];
    double doubleNumber;
    do {
        // Prompts the user to enter a numeric string
        printf ("Type the double numeric string (q - to quit):\n");
        // Reads a line from the standard input into doubleString
        fgets(doubleString, BUFFER_SIZE, stdin);
        // Removes the newline character at the end of the string
        doubleString [strlen(doubleString) - 1] = '\0';
        // Checks if the entered string is not "q"
        if ((strcmp(doubleString, "q") != 0)) {
            // Converts the string to a double using atof() function
            doubleNumber = atof (doubleString);
            // Prints the converted double number
            printf ("Converted number is %f\n", doubleNumber);
        }
    } while (strcmp(doubleString, "q") != 0);// Loops until the entered string is "q"
    //
    printf("*** End of Converting Strings to double Demo ***\n\n");

}