#include <stdio.h>

int find_numbers();
int add_numbers();

int main() {

    add_numbers();

    int var3;

    printf("Total is : %d\n", var3);

    return 0;
}

int find_numbers() {

    int var1;
    int var2;
    
    printf("Please Enter first number : ");
    scanf("%d", &var1);
    printf("Please Enter second number : ");
    scanf("%d", &var2);

    return var1, var2;

}

int add_numbers() {

    find_numbers();

    int var3;

    var3 = var1 * var2;

    return var3;

}
