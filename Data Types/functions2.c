#include <stdio.h>

void add_numbers(int num1, int num2);
void add_numbers2();
int add_numbers_return(int num1, int num2);

int main() {

    add_numbers(20, 30);
    add_numbers(200, 500);

    int numberTotal = add_numbers_return(67432, 4837832); //storing value

    printf("%d\n", numberTotal);

    return 0;
}

void add_numbers2() {

    int number1;
    int number2;
    int numberTotal;

    number1 = 20;
    number2 = 30;

    numberTotal = number1 + number2;

    printf("%d\n", numberTotal);

}

void add_numbers(int num1, int num2) { //use more than once

    int numberTotal;

    numberTotal = num1 + num2;
    printf("%d\n", numberTotal);

}

int add_numbers_return(int num1, int num2) {

    int numberTotal;
    numberTotal = num1 + num2;

    return numberTotal;

}
