#include <stdio.h>

int square_the_value(int userInput);

int main() {

    int userInput;
    int sqValue;

    printf("Enter Value : ");
    scanf("%d", &userInput);

    sqValue = square_the_value(userInput);

    printf("Squared Value is : %d\n", sqValue);

    return 0;
}

int square_the_value(int userInput) {

    int sendingVariable;

    sendingVariable = userInput * userInput;

    return sendingVariable;

}
