/*
Author:         Alex Chu(V1), Kenneth Reforma(V2), Dan Zhang(V3)
Email:          kchu30@myseneca.ca, kreforma@myseneca.ca, dzhang101@myseneca.ca
ID:             153954219, 144680212, 182201210
Date written:   2022-08-04(V1), 2022-08-dd(V2), 2022-08-dd(V3)
Course:         CPR 101 NHH
Project:        Final Project
Purpose:        This module is to parse a numeric string argument to an integer by calling the atoi() function. From the original user input it is to be in ASCII value because it is a string, then it is being converted to an actual number having the value as typed.
*/

//Header included, Macro definitions
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

//Function starts here. No argument passed and return null
void converting(void) {

//Version 1
    printf("*** Start of Converting Strings to int Demo ***\n");
    char intString[BUFFER_SIZE];    //this variable is to store the input "INTEGER" string from user
    int intNumber;      //this variable is to store the INTEGER number converted from the String

    //Start of do-while loop, exits when "q" is received
    do {

        printf("Type an int numeric string (q - to quit):\n");
        fgets(intString, BUFFER_SIZE, stdin);
        intString[strlen(intString) - 1] = '\0';    //define the null terminator at the end of the string
        if (strcmp(intString, "q") != 0) {          //compare the input with the exiting string "q"
            intNumber = atoi(intString);            //convert the numeric string to integer type
            printf("Converted number is %d\n", intNumber);      //Display the result after conversion
        }    //end of if
    } while (strcmp(intString, "q") != 0);          //end of loop
    printf("*** End of Converting Strings to int Demo ***\n\n");
}