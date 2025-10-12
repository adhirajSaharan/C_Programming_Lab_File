#include <stdio.h>

int main() {
    int i, j, num = 1;

    for (i = 1; i <= 3; i++) {
        // Print leading spaces to center the pyramid
        for (j = 1; j <= 3 - i; j++) {
            printf(" ");
        }

        // Print numbers for the current row
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}
