/*
 * Author:
 * Description: Creates a structure to store students and their ages/grade.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Student { //making structure

    char* studentName;
    int studentAge;
    int studentGrade;

} Student;

char* get_input();
void print_student(Student);

int main() {

    int studentAmount;
    int i;

    printf("How many students are in the class? ");
    studentAmount = atoi(get_input()); //getting input as a string and then converting to integer

    Student students[studentAmount];// sying how many student structures are being made

    for (i = 0; i < studentAmount; i++) {

        char* user_name;
        int user_age;
        int user_grade;

        printf("Enter student name: "); //first we ask for information
        user_name = get_input();
        printf("Enter student age: ");
        user_age = atoi(get_input());
        printf("Enter student grade: ");
        user_grade = atoi(get_input());

        students[i].studentName = user_name; //secondly we store information
        students[i].studentAge = user_age;
        students[i].studentGrade = user_grade;

        print_student(students[i]); //we send information

    }

    return 0;
}

char* get_input() { //taking information and giving it back as a string
    char* user_input = malloc(sizeof(char) * 128);
    fgets(user_input, 128, stdin);
    return user_input;
}

void print_student(Student student) { //printing sent information using structure

    printf("\n");
    printf("Student Name : %s", student.studentName);
    printf("Student Age : %d\n", student.studentAge);
    printf("Student Grade : %d\n", student.studentGrade);
    printf("\n");

}
