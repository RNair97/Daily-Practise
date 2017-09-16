#include <stdio.h>
#include <math.h>

double quadratic_formula_function(double userInput1, double userInput2, double userInput3);

int main() {

    double userInput1;
    double userInput2;
    double userInput3;
    double xValue;

    printf("Enter Variable a : ");
    scanf("%lf", &userInput1);
    printf("Enter Variable b : ");
    scanf("%lf", &userInput2);
    printf("Enter Variable c : ");
    scanf("%lf", &userInput3);

    xValue = quadratic_formula_function(userInput1, userInput2, userInput3);

    printf("[x] is : %lf\n", xValue);

    return 0;
}

double quadratic_formula_function(double userInput1, double userInput2, double userInput3) {

    double xVariable;

    if (userInput2 < 0) {

        

    }

    xVariable = ((-1 * userInput2) + (sqrt((userInput2 * userInput2) - (4 * (userInput1) * (userInput3)))) / (2 * userInput1));

    return xVariable;

}
