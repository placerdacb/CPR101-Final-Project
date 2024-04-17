// CONVERTING MODULE SOURCE

// Disabling secure warnings
#define CRT_SECURE_NO_WARNINGS

// Defining buffer size for input
#define BUFFER_SIZE 80

// Including header file for the converting module
#include "converting.h"

// V3

// Function to convert strings to long
void converting(void) {
    // Print start message
    printf("*** Start of Converting Strings to long Demo ***\n");
    
    char longString[BUFFER_SIZE]; // Buffer to store input string
    long longNumber; // Variable to store converted long number
    
    // Start of do-while loop to repeatedly prompt for input
    do {
        // Prompt for input
        printf("Type the long numeric string (q - to quit):\n");
        
        // Read input from user
        fgets(longString, BUFFER_SIZE, stdin);
        
        // Remove newline character from input
        longString[strlen(longString) - 1] = '\0';
        
        // Check if input is not 'q'
        if (strcmp(longString, "q") != 0) {
            // Convert string to long
            longNumber = atol(longString);
            
            // Print converted number
            printf("Converted number is %ld\n", longNumber);
        }
    } while (strcmp(longString, "q") != 0); // Continue loop until input is 'q'
    
    // Print end message
    printf("*** End of Converting Strings to long Demo ***\n\n");
}
