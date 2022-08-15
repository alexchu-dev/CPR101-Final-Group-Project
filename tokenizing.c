/*
Author:         Alex Chu
Email:          kchu30@myseneca.ca
ID:             153954219
Date written:   2022-08-02(V1)
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
        char    words[BUFFER_SIZE]; //this variable is to store the input string from user
        char*   nextWord = NULL;    //this is where the token takes place, string is modified and broken into tokens
        int     wordsCounter;       //this variable stores the numbers of tokens

        //Start of do-while loop, exits when "q" is received
        do {
            printf("Type a few words seperated by space (q - to quit):\n");
            fgets(words, BUFFER_SIZE, stdin);
            words[strlen(words) - 1] = '\0';    //define the null terminator at the end of the string
            if (strcmp(words, "q") != 0) {      //compare the input with the exiting string "q"
                nextWord = strtok(words, " ");  //string lib function split string by delimiters, returns a pointer to the first token in word
                wordsCounter = 1;               //initialise the wordsCounter so that it starts with 1 in the display
                while (nextWord) {              //loop continues until there null terminator found, hence it keeps spliting the string
                    printf("Word #%d is \'%s'\n", wordsCounter++, nextWord);
                    nextWord = strtok(NULL, " "); // returns a pointer to the next token in the string
                }       //end of while loop when reach null terminator
            }       //end of if
        } while (strcmp(words, "q") != 0);      //end of loop
        printf("*** End of Tokenizing Words Demo ***\n\n");

    //Version 2
    printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[BUFFER_SIZE];  //this variable is to store the input string from user
    char* nextPhrase = NULL;    //this is where the token takes place, string is modified and broken into tokens
    int phrasesCounter;         //this variable stores the numbers of tokens
    do {
        printf("Type a few phrases seperated by comma (q - to quit):\n");
        fgets(phrases, BUFFER_SIZE, stdin);
        phrases[strlen(phrases) - 1] = '\0';    //define the null terminator at the end of the string
        if (strcmp(phrases, "q") != 0) {        //compare the input with the exiting string "q"
            nextPhrase = strtok(phrases, ",");  //string lib function split string by delimiters, returns a pointer to the first token in word
            phrasesCounter = 1;                 //initialise the wordsCounter so that it starts with 1 in the display
            while (nextPhrase) {                //loop continues until there null terminator found, hence it keeps spliting the string
                printf("Phrase #%d is \'%s'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ","); // returns a pointer to the next token in the string
            }
        }
    } while (strcmp(phrases, "q") != 0);    //end of loop
    printf("*** End of Tokenizing Phrases Demo ***\n\n");

    //Version 3
    printf("*** Start of Tokenizing Sentences Demo ***\n");
    char sentences[BUFFER_SIZE];  //this variable is to store the input string from user
    char* nextSentence = NULL;    //this is where the token takes place, string is modified and broken into tokens
    int sentencesCounter;         //this variable stores the numbers of tokens
    do {
        printf("Type a few sentences seperated by dot(q - to quit):\n");
        fgets(sentences, BUFFER_SIZE, stdin);
        sentences[strlen(sentences) - 1] = '\0';    //define the null terminator at the end of the string
        if (strcmp(sentences, "q") != 0) {        //compare the input with the exiting string "q"
            nextSentence = strtok(sentences, ".");  //string lib function split string by delimiters, returns a pointer to the first token in word
            sentencesCounter = 1;                 //initialise the wordsCounter so that it starts with 1 in the display
            while (nextSentence) {                //loop continues until there null terminator found, hence it keeps spliting the string
                printf("Sentences #%d is \'%s'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, "."); // returns a pointer to the next token in the string
            }
        }
    } while (strcmp(sentences, "q") != 0);    //end of loop
    printf("*** End of Tokenizing Sentences Demo ***\n\n");


}
