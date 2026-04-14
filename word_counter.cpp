#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LINE_LENGTH 1024

int main(int argc, char *argv[])
{
    printf("Usage: %s <filename>\n", argv[0]);
    FILE *filePointer = fopen(argv[1], "r"); 
    char buffer[LINE_LENGTH];
    int inWord = 0;
    int lines = 0, words = 0;
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) 
    {
        lines++;
        for (size_t i = 0; buffer[i] != '\0'; i++)
        { 
            if (isspace(buffer[i])) 
            {
                inWord = 0;
            } 
            else if (inWord == 0) 
            {
                inWord = 1; 
                words++;
            }
        }
    }
    printf("File: %s\n", argv[1]);
    printf("\nLines: %d, Words: %d", lines, words);
    fclose(filePointer);
    return 0;
}