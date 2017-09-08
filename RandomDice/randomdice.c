#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int rndNum1;
    int rndNum2;

    srand(time(NULL));

    rand();
    rndNum1 = (rand() % 6) + 1; // rand() % 7 convertion to make sure 0 won't come. 
    rndNum2 = (rand() % 6) + 1;

    printf("Player 1 Rolled %d\n", rndNum1);
    printf("Player 2 Rolled %d\n", rndNum2);

    if (rndNum1 > rndNum2) {

        printf("Player 1 Wins!!\n");

    } else if (rndNum1 < rndNum2) {

        printf("Player 2 Wins!!\n");

    } else {

        printf("It's a draw!\n");

    }

    return 0;
}
