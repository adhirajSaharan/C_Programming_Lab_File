#include <stdio.h>

int main() {
    int num, positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);  // space before %c to clear newline
    } while (choice == 'y' || choice == 'Y');

    printf("Count of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of zeroes: %d\n", zero);

    return 0;
}
