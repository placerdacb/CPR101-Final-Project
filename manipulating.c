#include <stdio.h>      
#include <string.h>    
#define CRT_SECURE_NO_WARNINGS     
#define BUFFER_SIZE 80            
#include "manipulating.h"        

// Function to demonstrate string concatenation
void manipulating(void) {
    printf("*** Start of Concatenating Strings Demo ***\n");
    // Declare buffer 
    char string1[BUFFER_SIZE];    
    char string2[BUFFER_SIZE];   

    // Loop until user quits
    do {
        printf("Type the 1st string (q - to quit): \n");   
        // Read first string from user input
        fgets(string1, BUFFER_SIZE, stdin);    
        // Remove newline character from input
        string1[strlen(string1) - 1] = '\0';   

        // If user does not enter "q", proceed with concatenation
        if ((strcmp(string1, "q") != 0)) {
            printf("Type the 2nd string: \n"); 
            // Read second string from user input
            fgets(string2, BUFFER_SIZE, stdin);    
            // Remove newline character from input
            string2[strlen(string2) - 1] = '\0';   
            // Concatenate second string to first string safely
            strcat_s(string1, BUFFER_SIZE, string2);
            printf("Concatenated string is \'%s\'\n", string1);   
        }
    } while (strcmp(string1, "q") != 0);   // Continue loop until user enters "q"

    printf("*** End of Concatenating strings Demo ***\n\n");   
}
