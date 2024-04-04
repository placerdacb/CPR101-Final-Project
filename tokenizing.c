// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_ NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

// V1
void tokenizing (void) { // start the Tokenizing module program
    printf ("*** Start of Tokenizing Words Demo ***\n");
    char words[BUFFER_SIZE]; //sets the array size of words variable acordly with buzzer size that is equal to 300
    char* nextWord = NULL; // nextWord sends its input to null
    int wordsCounter; // declaration of the variable wordsCounter
    
    do {
        printf ("Type a few words separated by space (q - to quit):\n"); //message asking for a input
        fgets(words, BUFFER_SIZE, stdin); // Read input from the user
        words[strlen(words) - 1] = '\0'; 
        if (strcmp(words, "q") != 0) {
            nextWord = strtok(words, " ");
            wordsCounter = 1;
            while (nextWord) {
                printf ("Word #%d is \'%s\'\n", wordsCounter++, nextWord); // the final ouput, seprated by words, and says to the user how much words are written
                nextWord = strtok(NULL, " ");
            }
        }
} while (strcmp(words, "q") != 0); // condition to make the loop working, that means until the input be "q"
printf("*** End of rokenizing Words Demo ***\n\n"); // message indicating the end of the module

}