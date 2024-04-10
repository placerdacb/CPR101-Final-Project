// MANIPULATING SOURCE
#define CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

void manipulating (void) {
    printf("*** Start of Comparing Strings Demo ***\n");
    char compare1[BUFFER_SIZE];
    char compare2[BUFFER_SIZE];
    int result;
    // Loop until the user enters 'q' to quit
do {
    printf ("Type the 1st string to compare (q - to quit): \n"); 
    fgets (compare1, BUFFER_SIZE, stdin);
    compare1[strlen(compare1) - 1] = '\0';// Remove the newline character
    // Check if the entered string is not 'q'
    if (strcmp(compare1, "q") != 0) {
        printf ("Type the 2nd string to compare: \n"); 
        fgets (compare2, BUFFER_SIZE, stdin);
        compare2 [strlen(compare2) - 1] = '\0';// Remove the newline character
        // Compare the two strings
        result=strcmp(compare1, compare2);
        if (result < 0)
            printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
        else if (result == 0)
            printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
        else
            printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
    }
} while (strcmp(compare1, "q") != 0);// Continue the loop until 'q' is entered
printf("*** End of Comparing strings Demo ***\n\n");

}