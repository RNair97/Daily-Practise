#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    char nameOne[125];
    char nameTwo[125];

    int optionOne;
    int optionTwo;

    int totalPlayer1;
    int totalPlayer2;

    int rndNum1;
    int rndNum2;

    totalPlayer1 = 0;
    totalPlayer2 = 0;

    bool player_one_turn = false;
    bool player_two_turn = false;


    printf("\nPlayer 1, enter your name : ");
    scanf("%s", nameOne);
    printf("Player 2, enter your name : ");
    scanf("%s", nameTwo);

    srand(time(NULL)); //generate SEED ONLY ONCE

    rand(); //calling the seed must always be with generator

    do {

    do {

        printf("\n1. Hit\n");
        printf("2. Stay\n");

        printf("%s, please select an option : ", nameOne);
        scanf("%d", &optionOne);

        if (optionOne == 1) {

            rndNum1 = (rand() % 13) + 1;
            totalPlayer1 = totalPlayer1 + rndNum1;

            printf("%s hits! Total is : %d\n", nameOne, totalPlayer1);

        } else {

            totalPlayer1 = totalPlayer1;

            printf("%s stays! Total is %d\n", nameOne, totalPlayer1);

            player_one_turn = false;

        }


    } while(player_one_turn == true);

    do {

        printf("\n1. Hit\n");
        printf("2. Stay\n");

        printf("%s, please select an option : ", nameTwo);
        scanf("%d", &optionTwo);

        if (optionTwo == 1) {

            rndNum2 = (rand() % 13) + 1;
            totalPlayer2 = totalPlayer2 + rndNum2;

            printf("%s hits! Total is : %d\n", nameTwo, totalPlayer2);

        } else {

            totalPlayer2 = totalPlayer2;

            printf("%s stays! Total is %d\n", nameTwo, totalPlayer2);

            player_two_turn = false;

        }


    } while(player_two_turn == true);

} while(player_one_turn == false && player_two_turn == false);


    return 0;
}
