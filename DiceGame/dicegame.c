#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int rndNum;
    int rndNum1;
    int winNum;
    int i;

    //char playerOne[125];
    //char playerTwo[125];

    winNum = 0;
    i = 0;


    //printf("Please Enter Player 1 name: ");
    //scanf(" %c\n", playerOne);
    //printf("Please Enter Player 2 name: ");
    //scanf(" %c\n", playerTwo);
    printf("------------------------------------------------------------------------------------------------\n");
    printf("This is the Dice Game. A winning number is decided and both players take turns rolling the dice.\n");
    printf("    Each roll is added together and the first player to hit the winning total wins the game.\n");
    printf("                --- Each Roll has a minimum of 1 and a maximum of 10 ---\n");
    printf("                                Goodluck and Enjoy!\n\n");
    printf("------------------------------------------------------------------------------------------------\n");
    printf("Please Enter Winning Number (Must be below 100) : ");
    scanf("%d\n", &winNum);

    if (winNum > 100) {

        printf("Error! Number larger than 100. Please try again and enter a number less than 100.\n");

    } else {

        srand(time(NULL));

        for (i = 0; i < winNum; i++) {

            rand();

            rndNum = (rand() % 10) + 1;
            rndNum1 = (rand() % 10) + 1;

            printf("Player 1 has rolled a %d\n", rndNum);
            printf("Player 2 has rolled a %d\n", rndNum1);

            if (rndNum == winNum) {

                printf("Player 1 wins! Congrats!\n");

            } else (rndNum1 == winNum); {

                printf("Player 2 wins! Congrats!\n");

            }

        }

    }

    return 0;
}
