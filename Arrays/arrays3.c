#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int get_sum(int array[]);

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

    totalValue = get_sum(array);

    printf("Average is : %d\n", totalValue);

    return 0;
}

int get_sum(int array[]) {

    int i;
    int array_adding;
    int sumValue;
    int finalValue;

    for (i = 0; i < 50; i++) {

        printf("%d\n", array[i]);

        array_adding = array[i];
        sumValue = sumValue + array_adding;

    }

    finalValue = sumValue / (i + 1);

    return finalValue;

}
