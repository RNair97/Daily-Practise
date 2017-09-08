#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int rndNum;
    int rndNum1;
    int winNum;
    int i;

    char playerOne[125];
    char playerTwo[125];

    winNum = 0;
    i = 0;


    printf("\nPlease Enter Player 1 name: ");
    scanf("%s", playerOne);
    printf("Please Enter Player 2 name: ");
    scanf("%s", playerTwo);
    printf("\n------------------------------------------------------------------------------------------------\n");
    printf("This is the Dice Game. A winning number is decided and both players take turns rolling the dice.\n");
    printf("    Each roll is added together and the first player to hit the winning total wins the game.\n");
    printf("                --- Each Roll has a minimum of 1 and a maximum of 10 ---\n");
    printf("                                Goodluck and Enjoy!\n\n");
    printf("------------------------------------------------------------------------------------------------\n\n");
    printf("Please Enter Winning Number (Must be below 100) : ");
    scanf("%d\n", &winNum);

    if (winNum > 100) {

        printf("Error! Number larger than 100. Please try again and enter a number less than 100.\n");

    } else {

        srand(time(NULL));

        for (i = 0; i > winNum; i++) {

            rand();

            rndNum = (rand() % 10) + 1;
            rndNum1 = (rand() % 10) + 1;

            printf("%s has rolled a %d\n", playerOne, rndNum);
            printf("%s has rolled a %d\n", playerTwo, rndNum1);

            if (rndNum == winNum) {

                printf("%s wins! Congrats!\n", playerOne);

            } else if (rndNum1 == winNum) {

                printf("%s wins! Congrats!\n", playerOne);

            }

        }

    }

    return 0;
}
