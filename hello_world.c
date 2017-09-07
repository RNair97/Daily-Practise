#include <stdio.h>

int main()
{
    // int for integers
    // double for decimals w 64
    // float for decimals w 32

    double numOne;
    double numTwo;
    double total;

    //numOne = 10.4;
    //numTwo = 5.6;

    printf("Please Enter first value\n");
    scanf("%lf", &numOne);
    printf("Please Enter second value\n");
    scanf("%lf", &numTwo);
    total = numOne + numTwo;
    printf("%.1lf + %.1lf = %.0lf \n", numOne, numTwo, total);
    printf("Hello World\n");
    return 0;
}
