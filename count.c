#include <stdio.h>
#include <string.h>
#define MAX_WORD_LENGTH 30

int main(int argc, char *argv[]){
        FILE *fp = fopen(argv[1], "r");         /* Pointer to read the text file */

        int totalWords = 0;     /* Counter for the words in the text file */

        char word[MAX_WORD_LENGTH];      /* Defines what a word is */

        if (argc != 2){
                printf("Please input the name of the file.\n");         /* Checks if a file name was given */
                return 0;
        }

        if (fp == NULL){
                printf("Text file cannot be opened.\n");         /* Checks if the text file is valid */
                return 0;
        }
        else {
                while (fscanf(fp, "%s", word) == 1){
                        totalWords++;   /* Loops through text file and adds to the counter for every word */
                }
        }
        printf("%d total words\n", totalWords);
        return 0;
}
