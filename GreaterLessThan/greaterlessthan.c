#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int rndNum;
    int numGreater;
    int numLess;
    int numEqual;
    int i;

    numGreater = 0;
    numLess = 0;
    numEqual = 0;
    i = 0;

    srand(time(NULL)); //Keeping seed generation outside solved issue

    for (i = 0; i < 50; i++) {

        rand();

        rndNum = (rand() % 100) + 1;

        if (rndNum > 50) {
            numGreater++; //Find out how to add more than one at a time maybe?
        } else if (rndNum < 50) {
            numLess++;
        } else {
            numEqual++;
        }

    }

    printf("Out of 50 numbers, %d were greater, %d were less, %d were equal.\n", numGreater, numLess, numEqual);

    return 0;
}
