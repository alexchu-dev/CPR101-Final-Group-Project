/*
*****************************************************************************
                          CPR101 Final Group Project
Full Name  : Alex Chu
Student ID#: 153954219
Email      : kchu30@myseneca.ca
Section    : NHH

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"


void tokenizing(void) {

//Version 1 of the codes
    printf("*** Start of Tokenizing Strings Demo ***\n");
    char words[BUFFER_SIZE];
    char* nextWord = NULL;
    int wordsCounter;
    do {
        printf("Type a few words seperated by space (q - to quit):\n");
        fgets(words, BUFFER_SIZE, stdin);
        words[strlen(words) - 1] = '\0';
        if (strcmp(words, "q") != 0) {
            nextWord = strtok(words, " ");
            wordsCounter = 1;
            while (nextWord) {
                printf("Word #%d is \'%s'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0);
    printf("*** End of Tokenizing Words Demo ***\n\n");

/*Version 2 of the codes
    printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[BUFFER_SIZE];
    char* nextPhrase = NULL;
    int wordsCounter;
    do {
        printf("Type a few words seperated by space (q - to quit):\n");
        fgets(words, BUFFER_SIZE, stdin);
        words[strlen(words) - 1] = '\0';
        if (strcmp(words, "q") != 0) {
            nextWord = strtok(words, " ");
            wordsCounter = 1;
            while (nextWord) {
                printf("Word #%d is \'%s'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0);
    printf("*** End of Tokenizing Words Demo ***\n\n");
*/


}
