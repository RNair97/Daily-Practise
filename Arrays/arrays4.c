#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* get_input();

int main() {

    char* phrase;
    int i;
    int lenght;
    int phraseCharacters;
    int phraseSpaces;

    printf("Enter a phrase: ");
    phrase = get_input();

    lenght = strlen(phrase);

    for (i = 0; i < lenght; i++) {

            if (phrase[i] != ' ') {
                phraseCharacters++;
            } else {
                phraseSpaces++;
            }

    }

    printf("There are %d letters and %d spaces in the phrase\n", phraseCharacters-1, phraseSpaces);

    return 0;
}

char* get_input() { //taking information and giving it back as a string
    char* user_input = malloc(sizeof(char) * 128);
    fgets(user_input, 128, stdin);
    return user_input;
}
