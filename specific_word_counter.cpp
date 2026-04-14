#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void clean_word(char *str) {
    int j = 0;
    for (int i = 0; str[i]; i++) {
        if (isalnum(str[i])) {
            str[j++] = tolower(str[i]);
        }
    }
    str[j] = '\0';
}

int main() {
    while(1) {
        char filename[256], target[256], buffer[256];
        int occurrences = 0;

        printf("\nEnter filename: ");
        if (scanf("%s", filename) != 1) break;

        FILE *filePointer = fopen(filename, "r");

        printf("Enter target word: ");
        scanf("%s", target);
        clean_word(target);

        while (fscanf(filePointer, "%255s", buffer) == 1) {
            clean_word(buffer);
            if (strcmp(buffer, target) == 0) {
                occurrences++;
            }
        }

        printf("The word '%s' occurs %d times in '%s'.\n", target, occurrences, filename);
        fclose(filePointer);
    }
    return 0;
}