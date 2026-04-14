#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LINE_LENGTH 1024

int main()
{
    char filename[256];
    printf("Enter filename: ");
    scanf("%s", filename);
    FILE *filePointer = fopen(filename, "r");
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
    printf("File: %s\n", filename);
    printf("\nLines: %d, Words: %d", lines, words);
    fclose(filePointer);
    return 0;
}