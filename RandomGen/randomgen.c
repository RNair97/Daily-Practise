#include <stdio.h>
#include <time.h> // for srand
#include <stdlib.h>// to call srand

int main() {

    int rndNum;
    char answer[125];

    srand(time(NULL)); //generating random seed

    printf("Enter a Question : ");
    scanf(" %c", answer); // space % c \\ recognize spaces in input

    // random number Generator
    rand(); // this causes generation of the seed continously
    rndNum = rand() % 7; // always add 1 on top of how many conditions

    if (rndNum == 0) {

        printf("Yes!\n");

    } else if (rndNum == 1) {

        printf("Certainly!\n");

    } else if (rndNum == 2) {

        printf("I'm not sure..\n");

    } else if (rndNum == 3) {

        printf("Maybe..\n");

    } else if (rndNum == 4) {

        printf("No Way!\n");

    } else if (rndNum == 5) {

        printf("Definitely not!\n");

    } else {

        printf("Error! Ask again.\n");

    }

    return 0;
}
