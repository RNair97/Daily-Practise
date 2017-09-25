#include <stdio.h>

int main() {

    int variable = 20
    int* variable_address;

    variable_address = &variable;

    printf("Variable is %d\n", *variable_address);

    return 0;
}
