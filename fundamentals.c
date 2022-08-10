/*
Author: Kenneth Reforma
Email: kreforma@myseneca.ca
ID: 144680212
Date written: 2022-08-03
Course: CPR 101 NHH
Project: Final Project
Purpose: The "fundamentals" module gets a string from the user. Afterwards, an input integer will be asked. The program will output the character at the nth position of the string based on the input integer. Note that the first character of the string starts at position 0. 
  Consider the following example:
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
        fgets(buffer1, BUFFER_SIZE, stdin); // Store the input string in string variable buffer1 from the standard input. Read maximum characters equal to BUFFER_SIZE.
        buffer1[strlen(buffer1) - 1] = '\0'; // Safely end the string by adding a null character based on the length of the input string
        if (strcmp(buffer1, "q") != 0) { // Did the user inputs 'q'? If NO, use Code Block 1

            // Start of Code Block 1: Execute if the input string is not character 'q'
            printf("Type the character position within the string:\n"); // Ask the user to input an integer that will be the basis of the character output
            fgets(numInput, NUM_INPUT_SIZE, stdin); // Store the input integer in string variable numInput from the standard input. Read maximum characters equal to NUM_INPUT_SIZE.
            numInput[strlen(numInput) - 1] = '\0'; // Safely end the string by adding a null character based on the length of the input string
            position = atoi(numInput); // Convert the input integer in String format into Integer format and store in variable position
            if (position >= strlen(buffer1)) { // Did the user inputs an integer greater than the string length? If YES, use Code Block 1.1

                // Start of Code Block 1.1: Execute if the input integer is greater than or equal to the length of input string
                position = strlen(buffer1) - 1; // Replace the value in variable position by the position of the last character in the input string
                printf("Too big... Position reduced to max. available\n"); // Notify the user that the input integer is exceeding the length of the input string
                // End of Code Block 1.1

            }
            printf("The character found at %d position is \'%c\'\n",(int)position, buffer1[position]); // Output the character positioned at the value inside variable position
            // End of Code Block 1

        }
    } while (strcmp(buffer1, "q") != 0); // Did the user input 'q'? If NO, loop again
    // End a DO-WHILE loop

    printf("*** End of Converting Strings to int Demo ***\n\n"); // Output an ending statement to mark end of the module

// V2
    printf("*** Start of Measuring Strings Demo ***\n");
    char buffer2[BUFFER_SIZE];

    do
    {
        printf("Type a string (q - to quit):\n");
        fgets(buffer2, BUFFER_SIZE, stdin);
        buffer2[strlen(buffer2) - 1] = '\0';

        if (strcmp(buffer2, "q") != 0)
            printf("The length of \'%s\' is %d characters\n",
                buffer2, (int)strlen(buffer2));
    } while (strcmp(buffer2, "q") != 0);
    printf("*** End of Measuring Strings Demo ***\n\n");
}
// End the fundamentals function and return the control to caller (main function)