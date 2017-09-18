#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int get_above(int array[]);

int main() {

    int array[50];
    int totalValue;
    int rndNumber;

    srand(time(NULL));
    rand();

    for (int i = 0; i < 50; i++) {
        int rndNumber = (rand() % 50) + 1;
        array[i] = rndNumber;
    }

    totalValue = get_above(array);

    printf("Number of numbers above 25 is : %d\n", totalValue);

    return 0;
}

int get_above(int array[]) {

    int i;
    int array_adding;
    int finalValue;
    int numberCounter;

    numberCounter = 0;

    for (i = 0; i < 50; i++) {

        printf("%d\n", array[i]);

        array_adding = array[i];

        if (array_adding > 43) {

            numberCounter++;

        }


    }

    return numberCounter;

}
