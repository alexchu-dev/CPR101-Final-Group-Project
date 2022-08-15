/*
Author:         Alex Chu(V1), Kenneth Reforma(V2), Dan Zhang(V3)
Email:          kchu30@myseneca.ca, kreforma@myseneca.ca, dzhang101@myseneca.ca
ID:             153954219, 144680212, 182201210
Date written:   2022-08-04(V1), 2022-08-dd(V2), 2022-08-dd(V3)
Course:         CPR 101 NHH
Project:        Final Project
Purpose:        This module is to parse a numeric string argument to an integer for version 1 and to a double for version 2 by calling the atoi() and atof()functions, respectively. From the original user input, it is to be in ASCII value because it is a string, then it is being converted to an actual number (integer and float) having the value as typed.
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

//Version 2
    printf("*** Start of Converting Strings to double Demo ***\n");
    char    doubleString[BUFFER_SIZE]; //this variable is to store the input string from user
    double  doubleNumber; //this variable is to store a number converted from the String

    //Start of do-while loop, exits when "q" is received
    do
    {
        printf("Type the double numeric string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin);
        doubleString[strlen(doubleString) - 1] = '\0'; //define the null terminator at the end of the string
        if ((strcmp(doubleString, "q") != 0)) //compare the input with the exiting string "q"
        {
            doubleNumber = atof(doubleString); //convert the numeric string to double floating point type
            printf("Converted number is %f\n", doubleNumber); //Display the result after conversion
        }        
    } while (strcmp(doubleString, "q") != 0); //end of loop
    printf("*** End of Converting String to double Demo ***\n\n");

//Version 3
    printf("*** Start of Converting Strings to long Demo ***\n");
    char  longString[BUFFER_SIZE]; //this variable is to store the input string from user
    long  longNumber; //this variable is to store a long number converted from the String

    //Start of do-while loop, exits when "q" is received
    do
    {
        printf("Type the long numeric string (q - to quit):\n");
        fgets(longString, BUFFER_SIZE, stdin);
        longString[strlen(longString) - 1] = '\0'; //define the null terminator at the end of the string
        if ((strcmp(longString, "q") != 0)) //compare the input with the exiting string "q"
        {
            longNumber = atol(longString); //convert the numeric string to long type
            printf("Converted number is %ld\n", longNumber); //Display the result after conversion
        }
    } while (strcmp(longString, "q") != 0); //end of loop
    printf("*** End of Converting String to double Demo ***\n\n");
}


