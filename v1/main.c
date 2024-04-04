#define _CRT_SECURE_NO_WARNINGS // Preprocessor directive to suppress warnings related to certain functions
#include "fundamentals.h" // import the fundamentals header
#include "manipulating.h"// import the manipulating header
#include "converting.h" // import the converting header
#include "tokenizing.h"// import the tokenizing header

int main (void) // // Function to demonstrate the main program V1
{
    char buff[10];
    do // Loop until the user decides to quit
    {   
        // print the menu indicating the start of the main program, bringing the menu for input choice
        printf("1 - Fundamentals\n"); 
        printf("2 - Manipulation\n"); 
        printf("3 - Converting\n"); 
        printf("4 - Tokenizing\n"); 
        printf("0 - Exit\n");
        printf("Which module to run? \n"); 
        fgets(buff, 10, stdin); // Read input from the user
        switch (buff[0]) // initiate the switch case based on the menu input choice, bringing the modules code to run
        {
        case '1': fundamentals ();
            break;
        case '2': manipulating ();
            break;
        case '3': converting();
            break;
        case '4': tokenizing();
            break;
        }
        
    } while (buff[0] != '0'); // condition to the loop continue
return 0; // exit code of the program

}
