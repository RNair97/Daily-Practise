#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int rndNum;
    int rndNum1;
    int winNum;
    int i;

    int totalPlayer1;
    int totalPlayer2;

    int previousTotal1;

    char playerOne[125];
    char playerTwo[125];

    winNum = 0;
    i = 0;

    totalPlayer1 = 0;
    totalPlayer2 = 0;


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

    scanf("%d", &winNum);

    if (winNum >= 100) {

        printf("\nError! Number larger than 100. Please try again and enter a number less than 100.\n");

    } else {

        srand(time(NULL)); //generate SEED ONLY ONCE

        rand(); //calling the seed must always be with generator

        do {

            rndNum = (rand() % 10) + 1;
            rndNum1 = (rand() % 10) + 1;

            totalPlayer1 = totalPlayer1 + rndNum; //look at previous total and adds new amount. (random roll)
            totalPlayer2 = totalPlayer2 + rndNum1;

            printf("\n%s has rolled a %d. Player one has a total of %d\n", playerOne, rndNum, totalPlayer1);
            printf("%s has rolled a %d. Player two has a total of %d\n", playerTwo, rndNum1, totalPlayer2);

            printf("\n");

        } while (totalPlayer1 < winNum || totalPlayer2 < winNum);

        if (totalPlayer1 >= winNum && totalPlayer2 >= winNum ) {

            if (totalPlayer1 > totalPlayer2) {

                printf("\n%s wins! Congrats! Total was %d\n", playerOne, totalPlayer1);

            } else {

                printf("\n%s wins! Congrats! Total was %d\n", playerTwo, totalPlayer2);

            }


        } else if (totalPlayer1 >= winNum) {

            printf("\n%s wins! Congrats! Total was %d\n", playerOne, totalPlayer1);

        } else if (totalPlayer2 >= winNum) {

            printf("\n%s wins! Congrats! Total was %d\n", playerTwo, totalPlayer2);

        }



    }

    return 0;
}
