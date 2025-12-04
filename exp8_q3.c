#include <stdio.h>

// Function to modify values of two integers using pointers
void modifyValues(int *a, int *b) {
    // Dereference pointers and modify the values they point to
    *a = *a + 10;    // Add 10 to the original value of 'a'
    *b = *b * 2;     // Multiply the original value of 'b' by 2
}

int main() {
    int x = 5;
    int y = 7;

    // Print original values before modification
    printf("Before modification: x = %d, y = %d\n", x, y);

    // Call modifyValues, passing addresses of x and y
    modifyValues(&x, &y);

    // Print values after modification
    printf("After modification:  x = %d, y = %d\n", x, y);

    return 0;   // Indicate successful termination
}
