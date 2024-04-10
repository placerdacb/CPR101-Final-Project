// TOKENIZING MODULE SOURCE
// This line indicates that this file contains the implementation of a tokenizing module.

#define _CRT_SECURE_NO_WARNINGS
// This line is a preprocessor directive to define a macro "_CRT_SECURE_NO_WARNINGS" which suppresses warnings related to certain secure functions in the CRT (C Run-Time) library.

#define BUFFER_SIZE 300
// This line defines a macro BUFFER_SIZE with a value of 300, indicating the size of the buffer used to store words.

#include "tokenizing.h"
// This line includes the header file "tokenizing.h", which likely contains declarations or definitions needed for this implementation.

// V1
// This is likely a version marker or a comment indicating the start of version 1 of this code.

void tokenizing(void) {
// This line defines the function "tokenizing" which takes no arguments and returns void.

    printf("*** Start of Tokenizing Words Demo ***\n");
    // This line prints a message indicating the start of the tokenizing words demo.

    char words[BUFFER_SIZE];
    // This line declares an array named "words" of type char with size BUFFER_SIZE, used to store user input.

    char* nextWord = NULL;
    // This line declares a char pointer "nextWord" and initializes it to NULL.

    int wordsCounter;
    // This line declares an integer variable "wordsCounter" without initialization.

    do {
    // This line starts a do-while loop. It will execute at least once and will continue to execute as long as the condition in the while statement evaluates to true.

        printf("Type a few words separated by space (q - to quit):\n");
        // This line prints a message prompting the user to type words.

        fgets(words, BUFFER_SIZE, stdin);
        // This line reads input from the standard input (stdin) and stores it in the "words" array, up to a maximum of BUFFER_SIZE characters.

        words[strlen(words) - 1] = '\0';
        // This line removes the trailing newline character from the input string by replacing it with a null terminator, effectively trimming the newline character.

        if (strcmp(words, "q") != 0) {
        // This line checks if the input string is not equal to "q".

            nextWord = strtok(words, " ");
            // This line tokenizes the input string into words using space (" ") as the delimiter and assigns the pointer to the first token to "nextWord".

            wordsCounter = 1;
            // This line initializes the wordsCounter to 1.

            while (nextWord) {
            // This line starts a while loop which iterates as long as "nextWord" is not NULL.

                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                // This line prints each tokenized word along with its count.

                nextWord = strtok(NULL, " ");
                // This line continues tokenizing the input string from where it left off, searching for subsequent tokens.

            }
        }

    } while (strcmp(words, "q") != 0);
    // This line checks if the input string is not equal to "q", if true, the loop continues; otherwise, it exits.

    printf("*** End of Tokenizing Words Demo ***\n\n");
    // This line prints a message indicating the end of the tokenizing words demo.

}
// This line marks the end of the "tokenizing" function.
