// TOKENIZING MODULE SOURCE
// This line indicates that this file contains the implementation of a tokenizing module.

#define _CRT_SECURE_NO_WARNINGS
// This line is a preprocessor directive to define a macro "_CRT_SECURE_NO_WARNINGS" which suppresses warnings related to certain secure functions in the CRT (C Run-Time) library.

#define BUFFER_SIZE 300
// This line defines a macro BUFFER_SIZE with a value of 300, indicating the size of the buffer used to store words.

#include "tokenizing.h"
// This line includes the header file "tokenizing.h", which likely contains declarations or definitions needed for this implementation.

// V3
// This is likely a version marker or a comment indicating the start of version 3 of this code.

void tokenizing(void) {
    printf("*** Start of Tokenizing Sentences Demo ***\n");
    // Print a message indicating the start of the tokenizing sentences demo.
    
    char sentences[BUFFER_SIZE];
    // Declare a character array named "sentences" with a size of BUFFER_SIZE (300).
    
    char* nextSentence = NULL;
    // Declare a character pointer named "nextSentence" and initialize it to NULL.
    
    int sentencesCounter;
    // Declare an integer variable named "sentencesCounter".
    
    do {
        printf ("Type a few sentences separated by dot (q - to quit) :\n");
        // Print a message prompting the user to type sentences separated by dots.
        
        fgets (sentences, BUFFER_SIZE, stdin);
        // Read a line of input from the standard input (stdin) and store it in the "sentences" array.
        
        sentences [strlen(sentences) - 1] = '\0';
        // Replace the newline character at the end of the input with a null terminator to remove it.
        
        if ((strcmp (sentences, "q") != 0)) {
            // If the input is not "q" (to quit), execute the following block of code.
            
            nextSentence = strtok (sentences, ".");
            // Tokenize the input string using the delimiter "." and store the result in "nextSentence".
            
            sentencesCounter = 1;
            // Initialize the sentencesCounter to 1.
            
            while (nextSentence) {
                // Iterate over each tokenized sentence until nextSentence becomes NULL.
                
                printf ("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
                // Print the sentence number and the tokenized sentence.
                
                nextSentence = strtok (NULL, ".");
                // Tokenize the next sentence using the same delimiter ".".
            }
        }
    } while (strcmp (sentences, "q") != 0);
    // Continue looping until the input is "q" (to quit).
    
    printf("*** End of Tokenizing Sentences Demo ***\n\n");
    // Print a message indicating the end of the tokenizing sentences demo.
}

