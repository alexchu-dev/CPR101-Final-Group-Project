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
compare1 is lower (in ASCII) than that of compare2 return < 0.
*/

#ifndef _MANIPULATING_H_
#define _MANIPULATING_H_
// include header file to point some system libraries we need to use
#include <stdio.h>
#include <string.h>
void manipulating(void);
#endif