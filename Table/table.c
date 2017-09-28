#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int rows, columns, userRows, userColumns;

    printf("How many rows do you want?\n");
    scanf("%d", &userRows);
    printf("How many columns do you want?\n");
    scanf("%d", &userColumns);

    for (rows = 1; rows <= userRows; rows++) {

        for (columns = 1; columns <= userColumns; columns++) {

            printf("▢ ");

        }

        printf("\n");

    }

    return 0;
}
