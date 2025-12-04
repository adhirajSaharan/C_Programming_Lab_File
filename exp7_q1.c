#include <stdio.h>

// Define a struct type to represent a complex number
struct Complex {
    int real;
    int imag;
};

// Function to read a complex number from input
struct Complex readComplex() {
    struct Complex c;
    printf("Enter real and imaginary parts separated by space: ");
    scanf("%d %d", &c.real, &c.imag);
    return c;
}

// Function to print a complex number
void printComplex(struct Complex c) {
    printf("%d + i%d\n", c.real, c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subtractComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    struct Complex c, c1, c2, sum, diff;

    // Read and print a single complex number
    printf("Read a single complex number:\n");
    c = readComplex();
    printf("You entered: ");
    printComplex(c);

    // Read two complex numbers for addition and subtraction
    printf("Enter two complex numbers:\n");
    c1 = readComplex();
    c2 = readComplex();

    // Add and subtract
    sum = addComplex(c1, c2);
    diff = subtractComplex(c1, c2);

    // Display results
    printf("Sum: ");
    printComplex(sum);

    printf("Difference: ");
    printComplex(diff);

    return 0;
}
