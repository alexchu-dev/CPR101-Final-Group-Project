/*
Authors:       Dan Zhang, Alex Chu, Kenneth Reforma
Emails:        dzhang101@myseneca.ca, kchu30@myseneca.ca, kreforma@myseneca.ca
IDs:           182201210, 153954219, 144680212
Date written: 2022-08-03
Course:       CPR 101 NHH
Project:      Final Project
Purpose:      The main function controls this program execution by directing
the calls to other four functions: Fundamentals, Manipulations, Tokenizing and
Conversions in the program, the main function is the starting point for this
program execution.
*/

#define _CRT_SECURE_NO_WARNINGS
#include "converting.h"
#include "fundamentals.h"
#include "manipulating.h"
#include "tokenizing.h"

int main(void) {  // main function, starting point for this program execution
  char buff[10];  // initialize string buff for module selection from user
  do {            // infinite loop start
    printf("1 - Fundamentals\n");
    printf("2 - Manipulation\n");
    printf("3 - Converting\n");
    printf("4 - Tokenizing\n");
    printf("0 - Exit\n");
    printf("Which module to run? \n");
    fgets(buff, 10, stdin);  // receive input from user for buff string
    switch (
        buff[0]) {  // check the first index of buff string for user selection
      case '1':     // if user input 1
        fundamentals();  // call fundamentals function
        break;
      case '2':          // if user input 2
        manipulating();  // call manipulating function
        break;
      case '3':        // if user input 3
        converting();  // call converting function
        break;
      case '4':        // if user input 4
        tokenizing();  // call tokenizing function
        break;
    }
  } while (buff[0] != '0');  // infinite loop unless "0" is input by user
  return 0;  // return 0 to the operating system, representing no errors;
             // program end
}