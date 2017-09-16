#include <stdio.h>

int valueChecker(int userInput1, int userInput2);

int main() {

    int userInput1;
    int userInput2;
    int maxValue;

    printf("Enter User Input 1 : ");
    scanf("%d", &userInput1);
    printf("Enter User Input 2 : ");
    scanf("%d", &userInput2);

    maxValue = valueChecker(userInput1, userInput2);

    printf("The greater value is : %d\n", maxValue);

    return 0;
}

int valueChecker(int userInput1, int userInput2) {

    if (userInput1 > userInput2) {

        return userInput1;

    }

    else if (userInput1 < userInput2) {

        return userInput2;

    }

    else {

        return userInput2;

    }

}
