#include <stdio.h>

int main() {
    int n = 5; // number of rows
    int i, j, k, num;

    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (k = 0; k < n - i - 1; k++) {
            printf(" ");
        }

        num = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            // Update value using binomial coefficient relation
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
