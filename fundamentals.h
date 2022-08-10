/*
Author:         Kenneth Reforma
Email:          kreforma@myseneca.ca
ID:             144680212
Date written:   2022-08-03
Course:         CPR 101 NHH
Project:        Final Project
Purpose:        The "fundamentals" module gets a string from the user. Afterwards, an input integer will be asked. The program will output the character at the nth position of the string based on the input integer. Note that the first character of the string starts at position 0. 
  Consider the following example:
    Input String: Kenneth Reforma
    Input Integer: 10
    OUTPUT: 'f'
The second upgrade of this module is to get a string from the user and the code will calculate the length of the entered string using the string library.

For both parts: If a 'q' input was entered by the user, the module will end and go back to the main menu.
*/


#ifndef _FUNDAMENTALS_H_
#define _FUNDAMENTALS_H_
#include <stdio.h> // Use the standard input-output library
#include <string.h> // Use the string library
#include <stdlib.h> // Use the extended standard library
void fundamentals(void); // Use fundamentals prototype
#endif