#include <stdio.h>

int add_numbers(int num1, int num2);

int main() {

    int num1;
    int num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    int numberTotal = add_numbers(num1, num2);

    printf("Total is : %d\n", numberTotal);

    return 0;
}

int add_numbers(int num1, int num2) {


    int numberTotal;

    numberTotal = num1 + num2;

    return numberTotal;

}
