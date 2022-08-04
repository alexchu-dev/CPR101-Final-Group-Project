/*
Author:       Dan Zhang
Email:        dzhang101@myseneca.ca
ID:           182201210
Date written: 2022-08-03
Course:       CPR 101 NHH
Project:      Final Project
Purpose:      This Manipulations module receives two strings from user input, by
calling strcat() function from C string library, the program concatenate these
two strings
*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"  //include header file to point libraries and structs used

// V1
// concatenate two strings from user input
void manipulating(void) {
  printf("*** Start of Concatenating Strings Demo ***\n");
  char string1[BUFFER_SIZE];  // initialize string1 to store first user input
                              // string
  char string2[BUFFER_SIZE];  // initialize string1 to store second user input
                              // string
  do {                        // infinite loop start
    printf("Type the 1st string (q - to quit):\n");
    fgets(string1, BUFFER_SIZE,
          stdin);  // receive the whole line input for string1
    string1[strlen(string1) - 1] =
        '\0';  // add null terminator symbol to the last index of string1
    if (strcmp(string1, "q") !=
        0) {  // check if user does not input "q" to quit
      printf("Type the 2nd string:\n");
      fgets(string2, BUFFER_SIZE,
            stdin);  // receive the whole line input for string2
      string2[strlen(string2) - 1] =
          '\0';  // add null terminator symbol to the last index of string2
      strcat(string1, string2);  // use strcat() function from C string library
                                 // to concatenate string1 and string2
      printf("Concatenated string is \'%s\'\n",
             string1);  // print the concatenated string
    }
  } while (strcmp(string1, "q") !=
           0);  // infinite loop end when character 'q' is input by user
  printf("*** End of Concatenating Demo ***\n\n");
}