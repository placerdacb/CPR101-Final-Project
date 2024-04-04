// FUNDAMENTALS MODULE SOURCE
// Preprocessor directive to suppress warnings related to certain functions
#define CRT_SECURE_NO_WARNINGS
// Define the buffer size for input strings
#define BUFFER_SIZE 80
// Define the size for input of numerical values
#define NUM_INPUT_SIZE 10
// Include the header file
#include "fundamentals.h"

// Function to demonstrate indexing strings
void fundamentals (void) {

// V1
// Print a message indicating the start of the demo
printf("*** Start of Indexing Strings Demo ***\n");
// Declare variables
char buffer1[BUFFER_SIZE];
char numInput[NUM_INPUT_SIZE];
size_t position;
// Loop until the user decides to quit
do {
    // Prompt the user to type a non-empty string or 'q' to quit
    printf ("Type not empty string (q - to quit):\n");
    // Read input string from the user
    fgets (buffer1, BUFFER_SIZE, stdin);
    // Remove the newline character from the input string
    buffer1[strlen(buffer1) - 1] = '\0';
    // Check if the input string is not 'q'
    if (strcmp(buffer1, "q") != 0) {
        // Prompt the user to type the character position within the string
        printf ("Type the character position within the string:\n");
        // Read input numerical value from the user
        fgets(numInput, NUM_INPUT_SIZE, stdin);
        // Remove the newline character from the input numerical value
        numInput[strlen(numInput) - 1] = '\0';
        // Convert the input numerical value to an integer
        position = atoi(numInput);
        // Check if the position is greater than or equal to the length of the string
        if (position >= strlen(buffer1)) {
            // Adjust position to the maximum available position in the string
            position = strlen (buffer1) - 1;
            printf ("Too big... Position reduced to max. available\n");
        }
        // Print the character found at the specified position within the string
        printf ("The character found at %d position is \'%c\'\n",
                        (int)position, buffer1[position]);
        
    }
// Continue looping until the user inputs 'q'
} while (strcmp(buffer1, "q") != 0);
// Print a message indicating the end of the demo
printf("*** End of Indexing Strings Demo ***\n\n");

}
