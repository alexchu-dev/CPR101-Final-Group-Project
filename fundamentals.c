/*
Author: Kenneth Reforma
Email: kreforma@myseneca.ca
ID: 144680212
Date written: 2022-08-03
Course: CPR 101
Project V1
Purpose: The "fundamentals" module gets a string from the user. Afterwards, an input integer will be asked. The program will output the character at the nth position of the string based on the input integer. Note that the first character of the string starts at position 0. Consider the following example:
Input String: Kenneth Reforma
Input Integer: 10
OUTPUT: 'f'

If a 'q' input was entered by the user, the module will end and go back to the main menu.
*/

// Start macros and headers here
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"
// End macros and headers

// Start the fundamentals function with null return and null parameter
void fundamentals(void) {
// V1
    printf("*** Start of Index Strings Demo ***\n"); // Output a header title of the module

    // Start variable declarations
    char buffer1[BUFFER_SIZE]; // String named "buffer1" with size equal to BUFFER_SIZE macro
    char numInput[NUM_INPUT_SIZE]; // String named "numInput"with size equal to NUM_INPUT_SIZE macro
    size_t position; // Unsigned integer named "position"
    // End variable declarations

    // Start a DO-WHILE loop
    do {
        printf("Type not empty string (q - to quit):\n"); // Ask the user to input a string or input 'q' to go back to main menu
        fgets(buffer1, BUFFER_SIZE, stdin); // Store the input string in variable buffer1 from the standard input. Read maximum characters equal to BUFFER_SIZE.
        buffer1[strlen(buffer1) - 1] = '\0'; // 
        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0';
            position = atoi(numInput);
            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");
            }
            printf("The character found at %d position is \'%c\'\n",(int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0);
    // End a DO-WHILE loop

    printf("*** End of Converting Strings to int Demo ***\n\n"); // Output an ending statement to mark end of the module
}