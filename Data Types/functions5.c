#include <stdio.h>

char markComment(char markComment);

int main() {

    int mark;
    char markComment[125];

    printf("Enter your mark : ");
    scanf("%d", mark);

    int mark = markComment(markComment);

    printf("%s\n", markComment);


    return 0;
}

char mark_comment(char markComment) {

    if (mark < 50) {

        printf("You Fail\n");

    }

    if (mark > 50 && mark < 60) {

        printf("You got a D\n");

    }

    if (mark > 60 && mark < 70) {

        printf("You got a C\n");

    }

    if (mark > 70 && mark < 80) {

        printf("You got a B\n");

    }

    if (mark > 80) {

        printf("You got an A\n");

    }

    return markComment;

}
