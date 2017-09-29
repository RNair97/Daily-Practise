#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int get_length(char* userInput);

int main() {

    char* userInput;
    int i;
    int j;
    bool lowercase = false;
    bool uppercase = false;
    bool dollarSign = false;
    bool numberValue = false;
    bool abChecker = false;

    printf("\n••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••\n");
    printf("Wanna make a good password? This program will help you out.\n");
    printf("Enter a password but make sure it atleast has the following: \n  ONE uppercase letter \n  ONE lowercase letter \n  $ sign \n  ONE number\n");
    printf("••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••\n");

    printf("\nEnter Password : ");
    scanf("%s", userInput);

    int passwordLength = get_length(userInput);

    for (i = 0; i < passwordLength; i++) {

        if ( islower(userInput[i])) {

            lowercase =  true;

            if (userInput[i] == 'a' && userInput[i + 1] == 'b') {

                    abChecker = true;

                }

        }

        else if ( isupper(userInput[i])) {

            uppercase = true;

        }

        else if ( userInput[i] == '$') {

            dollarSign = true;

        }

        else if ( isdigit(userInput[i]) ) {

            numberValue = true;

        }

    }

    if (lowercase == true && uppercase == true && dollarSign == true && numberValue == true && abChecker == true) {

        printf("Password is good!\n\n");

    } else {

        printf("Password needs work. Follow instructions!\n\n");

    }

    return 0;
}

int get_length(char* userInput) {

    bool terminator_location;
    int character_counter;
    int length;

    terminator_location = false;
    character_counter = 0; //starts at 0
    length = 0;

    do {

        if (userInput[character_counter] == '\0') {

            terminator_location = true;

        } else {

            length++;

        }

        character_counter = character_counter + 1;

    } while(terminator_location == false);

    return length;

}
