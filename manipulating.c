/*
Author:       Dan Zhang
Email:        dzhang101@myseneca.ca
ID:           182201210
Date written: 2022-08-09
Course:       CPR 101 NHH
Project:      Final Project
Purpose:      This Manipulations module V1 receives two strings from user input,
by calling strcat() function from C string library, the program concatenate
these two strings. This Manipulations module V2 receives two strings from user
input, and by calling strcmp() function from C string library, the program will
determine if these two strings are equal: if the strings are equal, the function
returns 0. If the first non-matching character in compare1 is greater (in ASCII)
than that of compare2, return > 0. If the first non-matching character in
compare1 is lower (in ASCII) than that of compare2 return < 0. The manipulations
module V3 receives two strings from user input, and finds the first occurrence
of the substring needle in the string haystack.
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
    if (strcmp(string1, "q") != 0) {  // check if user does not input "q", if
                                      // user enters "q", exit the while loop
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

  // V2
  // compare two strings from user input
  printf("*** Start of Comparing Strings Demo ***\n");
  char compare1[BUFFER_SIZE];  // initialize compare1 to store first user input
                               // string
  char compare2[BUFFER_SIZE];  // initialize compare1 to store second user input
                               // string
  int result;  // initialize an integer to receive the result of compare two
               // strings: compare1 and compare2
  do {         // infinite loop start
    printf("Type the 1st string to compare (q - to quit):\n");
    fgets(compare1, BUFFER_SIZE,
          stdin);  // receive the whole line input for compare1
    compare1[strlen(compare1) - 1] =
        '\0';  // add null terminator symbol to the last index of compare1
    if (strcmp(compare1, "q") != 0) {  // check if user does not input "q", if
                                       // user enter "q", exit the while loop
      printf("Type the 2nd string to compare:\n");
      fgets(compare2, BUFFER_SIZE,
            stdin);  // receive the whole line input for compare2
      compare2[strlen(compare2) - 1] = '\0';  // add null terminator symbol to
                                              // the last index of compare2
      result = strcmp(compare1,
                      compare2);  // compare two strings use strcmp() function
                                  // from string library
      if (result < 0)  // check if result is less than zero, if result is less
                       // than zero, print the next line
        printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
      else if (result == 0)  // check if result if equal to zero, if result is
                             // equal to zero, print the next line
        printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
      else  // if result is not less or equal to zero, which is greater than
            // zero, print next line
        printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
    }
  } while (strcmp(compare1, "q") !=
           0);  // infinite loop end when character 'q' is input by user
  printf("*** End of Comparing Strings Demo ***\n\n");

  // V3
  // search the first occurrence of sub-string needle in the string haystack
  // from user input
  printf("*** Start of Searching Strings Demo ***\n");
  char haystack[BUFFER_SIZE];  // initialize haystack to store first user input
                               // string
  char needle[BUFFER_SIZE];    // initialize needle to store first user input
                               // string
  char* occurrence = NULL;     // initialize a pointer named occurrence
  do {                         // infinite loop start
    printf("Type the string (q - to quit):\n");
    fgets(haystack, BUFFER_SIZE,
          stdin);  // receive the whole line input for haystack
    haystack[strlen(haystack) - 1] = '\0';  // add null terminator symbol to
                                            // the last index of haystack
    if (strcmp(haystack, "q") != 0) {  // check if user does not input "q", if
                                       // user enter "q", exit the while loop
      printf("Type the substring:\n");
      fgets(needle, BUFFER_SIZE,
            stdin);  // receive the whole line input for needle
      needle[strlen(needle) - 1] = '\0';  // add null terminator symbol to
                                          // the last index of needle
      occurrence =
          strstr(haystack, needle);  // search the first occurrence of the
                                     // sub-string needle in string haystack,
                                     // and assign the result to occurrence
      if (occurrence)
        printf("\'%s\' found at %d position\n", needle,
               (int)(occurrence -
                     haystack));  // check if occurrence exist, if occurrence
                                  // exist, printf the position
      else
        printf("Not found\n");  // else, the occurrence is non-exist, print Not
                                // found
    }
  } while (strcmp(haystack, "q") !=
           0);  // infinite loop end when character 'q' is input by user
  printf("*** End of Searching Strings Demo ***\n\n");
}