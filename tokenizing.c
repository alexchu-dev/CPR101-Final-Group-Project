/*/*
Author:         Alex Chu
Email:          kchu30@myseneca.ca
ID:             153954219
Date written:   2022-08-02
Course:         CPR 101 NHH
Project:        Final Project
Purpose:        This module is to tokenize a string by using strtok() and split them into tokens by using delimiters. The codes written use a space " " as a delimiters to separate a string into words and output them one by one giving the order number respectively. By upgrading the codes, it could be working with data files and output the data which use delimiters. E.g. An input as "Hello World" would be split down to "Hello" and "World".
*/

//Header included, Macro definitions
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

//Function starts here. No argument passed and return null
void tokenizing(void) {

//Version 1
    printf("*** Start of Tokenizing Strings Demo ***\n");
    char    words[BUFFER_SIZE]; //stores the input string from user
    char*   nextWord = NULL;    //this is where the token takes place, string is modified and broken into tokens
    int     wordsCounter;       //this variable stores the numbers of tokens
    do {
        printf("Type a few words seperated by space (q - to quit):\n"); 
        fgets(words, BUFFER_SIZE, stdin);
        words[strlen(words) - 1] = '\0';    //define the null terminator
        if (strcmp(words, "q") != 0) {      //compare the input and only exit when receive "q"
            nextWord = strtok(words, " ");  //string lib function split string by delimiters, returns a pointer to the first token in word
            wordsCounter = 1;
            while (nextWord) {              //loop continues until there null terminator found, hence it keeps spliting the string
                printf("Word #%d is \'%s'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " "); // returns a pointer to the next token in the string
            }       //end of while loop when reach null terminator
        }       //end of if
    } while (strcmp(words, "q") != 0);      //end while loop when 
    printf("*** End of Tokenizing Words Demo ***\n\n");

/*Version 2
    printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[BUFFER_SIZE];
    char* nextPhrase = NULL;
    int phrasesCounter;
    do {
        printf("Type a few phrases seperated by comma (q - to quit):\n");
        fgets(phrases, BUFFER_SIZE, stdin);
        phrases[strlen(phrases) - 1] = '\0';
        if (strcmp(phrases, "q") != 0) {
            nextPhrase = strtok(phrases, ",");
            phrasesCounter = 1;
            while (nextPhrase) {
                printf("Phrase #%d is \'%s'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ",");
            }
        }
    } while (strcmp(phrases, "q") != 0);
    printf("*** End of Tokenizing Phrases Demo ***\n\n");
*/


}
