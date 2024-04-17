// FUNDAMENTALS MODULE SOURCE
// Preprocessor directive to suppress warnings related to certain functions
#define CRT_SECURE_NO_WARNINGS
// Define the buffer size for input strings
#define BUFFER_SIZE 80
// Define the size for input of numerical values
#define NUM_INPUT_SIZE 10
// Include the header file
#include "fundamentals.h"

// V3
// Function to demonstrate indexing strings
void fundamentals(void) {
    // Print a message indicating the start of the demo
    printf("*** Start of Copying Strings Demo ***\n");
    // Declare an array for the destination string
    char destination[BUFFER_SIZE];
    // Declare an array for the source string
    char source[BUFFER_SIZE];
    // Loop until the user enters 'q' to quit
    do {
        // Reset the first character of the destination string to '\0'
        destination[0] = '\0';
        // Print a message indicating that the destination string is reset to empty
        printf("Destination string is reset to empty\n");
        // Prompt the user to type a source string
        printf("Type the source string (q - to quit) : \n");
        // Read a line of input from the user into the source string
        fgets(source, BUFFER_SIZE, stdin);
        // Replace the newline character at the end of the input with '\0'
        source[strlen(source) - 1] = '\0';
        // Check if the user input is not 'q'
        if (strcmp(source, "q") != 0) {
            // Copy the contents of the source string to the destination string
            strcpy(destination, source);
            // Print the new destination string
            printf("New destination string is \'%s\'\n", destination);
        }
    } while (strcmp(source, "q") != 0); // Continue the loop if the user input is not 'q'
    // Print a message indicating the end of the demo
    printf("*** End of Copying Strings Demo ***\n\n");
}
