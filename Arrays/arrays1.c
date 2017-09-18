#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int get_sum(int array[]);

int main() {

    int array[5];
    int totalValue;
    int rndNumber;

    srand(time(NULL));
    rand();

    for (int i = 0; i < 5; i++) {
        int rndNumber = (rand() % 50) + 1;
        array[i] = rndNumber;
    }

    totalValue = get_sum(array);

    printf("Total is : %d\n", totalValue);

    return 0;
}

int get_sum(int array[]) {

    int i;
    int array_adding;
    int sumValue;

    for (i = 0; i < 5; i++) {

        printf("%d\n", array[i]);

        array_adding = array[i];
        sumValue = sumValue + array_adding;

    }

    return sumValue;

}
