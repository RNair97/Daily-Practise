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

    bool player_one_turn = true;
    bool player_two_turn = false;

    bool player_one_hold = false;
    bool player_two_hold = false;



    printf("\nPlayer 1, enter your name : ");
    scanf("%s", nameOne);
    printf("Player 2, enter your name : ");
    scanf("%s", nameTwo);

    srand(time(NULL)); //generate SEED ONLY ONCE

    rand(); //calling the seed must always be with generator

    do {

        if (player_one_turn == true) {

            printf("\n1. Hit\n");
            printf("2. Stay\n");

            printf("%s, please select an option : ", nameOne);
            scanf("%d", &optionOne);

            if (optionOne == 1) {

                rndNum1 = (rand() % 13) + 1;
                totalPlayer1 = totalPlayer1 + rndNum1;

                printf("%s hits! Total is : %d\n", nameOne, totalPlayer1);


            } else {

                printf("%s stays! Total is %d\n", nameOne, totalPlayer1);

                player_one_hold = true;

            }

            if (player_two_hold == true) {


                if (player_one_hold == true) {

                    player_one_turn = false;
                    player_two_turn = false;

                } else {

                    player_one_turn = true;
                    player_two_turn = false;

                }

            } else {

                player_one_turn = false;
                player_two_turn = true;

            }

            if (totalPlayer1 == 21) {

                player_one_turn = false;
                player_two_turn = false;

            }

            if (totalPlayer1 > 21) {

                player_one_turn = false;
                player_two_turn = false;

                printf("%s lost for going over 21!\n", nameOne);

            }


        }


        if (player_two_turn == true) {

            printf("\n1. Hit\n");
            printf("2. Stay\n");

            printf("%s, please select an option : ", nameTwo);
            scanf("%d", &optionTwo);

            if (optionTwo == 1) {

                rndNum2 = (rand() % 13) + 1;
                totalPlayer2 = totalPlayer2 + rndNum2;

                printf("%s hits! Total is : %d\n", nameTwo, totalPlayer2);

            } else {

                printf("%s stays! Total is %d\n", nameTwo, totalPlayer2);

                player_two_hold = true;

            }

            if (player_one_hold == true) {

                if (player_two_hold == true) {

                    player_one_turn = false;
                    player_two_turn = false;

                } else {

                    player_one_turn = false;
                    player_two_turn = true;

                }

            } else {

                player_one_turn = true;
                player_two_turn = false;

            }

            if (totalPlayer2 == 21) {

                player_two_turn = false;
                player_one_turn = false;

            }


            if (totalPlayer1 > 21) {

                player_one_turn = false;
                player_two_turn = false;

                printf("%s lost for going over 21!\n", nameTwo);

            }



        }

    } while(player_one_turn == true || player_two_turn == true);


    if (totalPlayer1 > totalPlayer2) {

        printf("\n%s wins!\n", nameOne);

    } else {

        printf("\n%s wins!\n", nameTwo);

    }

    return 0;
}
