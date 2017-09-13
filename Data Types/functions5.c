#include <stdio.h>

void mark_checker(int mark);

int main() {

    int mark;

    printf("Enter your mark : ");
    scanf("%d", &mark);

    mark_checker(mark);

    return 0;
}

void mark_checker(int mark) {

    if (mark < 50) {

        printf("You Fail\n");

    }

    if (mark >= 50 && mark < 60) {

        printf("You got a D\n");

    }

    if (mark >= 60 && mark < 70) {

        printf("You got a C\n");

    }

    if (mark >= 70 && mark < 80) {

        printf("You got a B\n");

    }

    if (mark >= 80 && mark < 101) {

        printf("You got an A\n");

    }

    if (mark >= 101) {

        printf("Good Job! You're really smart!\n");

    }

}
