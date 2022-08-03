/*
Author:         Alex Chu, Kenneth, Dan
Email:          kchu30@myseneca.ca
ID:             153954219
Date written:   2022-08-02
Course:         CPR 101 NHH
Project:        Final Project
Purpose:        This module is to parse a numeric string argument to an integer by calling the atoi() function. From the original user input it is to be in ASCII value because it is a string, then it is being converted to an actual number having the value as typed.
*/
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

//V1
void converting(void) {
    printf("*** Start of Converting Strings to int Demo ***\n");
    char intString[BUFFER_SIZE];
    int intNumber;
    do {

        printf("Type an int numeric string (q - to quit):\n");
        fgets(intString, BUFFER_SIZE, stdin);
        intString[strlen(intString) - 1] = '\0';
        if (strcmp(intString, "q") != 0) {
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0);
    printf("*** End of Converting Strings to int Demo ***\n\n");
}