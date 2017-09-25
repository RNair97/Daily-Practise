#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* get_input();

int main() {

    int number_of_students;
    int i;

    printf("How many students are in the class? ");
    number_of_students = atoi(get_input());

    char* studentName[number_of_students];
    char* student_name;

    for (i = 0; i < number_of_students; i++) {

        printf("Enter Student %d: ", i+1);
        student_name = get_input();

        studentName[i] = student_name;
    }

    for (i = 1; i < number_of_students; i+=2) {

        printf("%s", studentName[i]);

    }

    return 0;
}

char* get_input() { //taking information and giving it back as a string
    char* user_input = malloc(sizeof(char) * 128);
    fgets(user_input, 128, stdin);
    return user_input;
}
