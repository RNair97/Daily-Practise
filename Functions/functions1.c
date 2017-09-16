#include <stdio.h>

double value_checker(double userInput);

int main() {

    double userInput;
    double absoluteValue = 0.0;

    printf("Please Enter a value: ");
    scanf("%lf", &userInput);

    absoluteValue = value_checker(userInput);

    printf("Value is : %.2lf\n", absoluteValue);

    return 0;
}

double value_checker(double userInput) {

    double the_value_to_return = userInput;

    if (userInput < 0) {

        the_value_to_return = the_value_to_return * -1;

    }

    return the_value_to_return;

}
