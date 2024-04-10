// FUNDAMENTALS MODULE SOURCE
// Preprocessor directive to suppress warnings related to certain functions
#define CRT_SECURE_NO_WARNINGS
// Define the buffer size for input strings
#define BUFFER_SIZE 80
// Define the size for input of numerical values
#define NUM_INPUT_SIZE 10
// Include the header file
#include "fundamentals.h"

// V2
// Function to demonstrate indexing strings
void fundamentals (void) {
// Print a message indicating the start of the demo
printf("*** Start of Strings Demo ***\n");
// Declare variables
char buffer2[BUFFER_SIZE];
// Loop until the user decides to quit
do {
    // Prompt the user to type a non-empty string or 'q' to quit
    printf ("Type a string (q - to quit):\n");
    // Read input string from the user
    fgets (buffer2, BUFFER_SIZE, stdin);
    // Remove the newline character from the input string
    buffer2[strlen(buffer2) - 1] = '\0';
    // Check if the input string is not 'q'
    if (strcmp(buffer2, "q") != 0)
        // Print the character found at the specified position within the string
        printf ("The length of is \'%s\' is %d characters\n", buffer2, (int)strlen(buffer2));
// Continue looping until the user inputs 'q'
} while (strcmp(buffer2, "q") != 0);
// Print a message indicating the end of the demo
printf("*** End of Measuring Strings Demo ***\n\n");

}