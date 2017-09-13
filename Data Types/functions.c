#include <stdio.h>

void hello_world();
void print_int(int value); //same as exact funtion //initialization

int main() {

    hello_world();
    print_int(655);

    return 0;
}

void hello_world() {

    printf("Hello World!\n");

}

void print_int(int value) { //declaration

    printf("%d\n", value);

}
