// MANIPULATING SOURCE

// Disabling secure warnings
#define CRT_SECURE_NO_WARNINGS

// Defining buffer size for input
#define BUFFER_SIZE 80

// Including header file for the manipulating module
#include "manipulating.h"

// V3
void manipulating(void) {
    // Print start message
    printf("*** Start of Searching Strings Demo ***\n");
    
    // Declare variables
    char haystack[BUFFER_SIZE]; // Buffer to store input string
    char needle[BUFFER_SIZE];   // Buffer to store substring
    char* occurrence = NULL;    // Pointer to store the occurrence of substring
    
    // Start of do-while loop to repeatedly search for substring
    do {
        // Prompt for input string
        printf("Type the string (q - to quit):\n");
        
        // Read input string from user
        fgets(haystack, BUFFER_SIZE, stdin);
        
        // Remove newline character from input string
        haystack[strlen(haystack) - 1] = '\0';
        
        // Check if input string is not 'q'
        if (strcmp(haystack, "q") != 0) {
            // Prompt for substring
            printf("Type the substring:\n");
            
            // Read substring from user
            fgets(needle, BUFFER_SIZE, stdin);
            
            // Remove newline character from substring
            needle[strlen(needle) - 1] = '\0';
            
            // Search for substring in input string
            occurrence = strstr(haystack, needle);
            
            // Check if substring is found
            if (occurrence)
                printf("'%s' found at %d position\n", needle, (int)(occurrence - haystack));
            else
                printf("Not found\n");
        }
    } while (strcmp(haystack, "q") != 0); // Continue loop until input string is 'q'
    
    // Print end message
    printf("*** End of Searching Strings Demo ***\n\n");
}
