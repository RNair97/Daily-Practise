#include <stdio.h>
#include <math.h>

double find_variable(int var1, int var2);

int main() {

    int var1;
    int var2;

    printf("Enter number 1 : ");
    scanf("%d", &var1);
    printf("Enter number 2 : ");
    scanf("%d", &var2);

    double var3 = find_variable(var1, var2);

    printf("C is %.2f\n", var3);

    return 0;
}

double find_variable(int var1, int var2) {

    double var3;

    var3 = (pow(var1, 2)) + (pow(var2, 2));
    var3 = sqrt(var3);

    return var3;

}
