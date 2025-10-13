#include <stdio.h>

// Recursive function to find GCD of two numbers using Euclidean Algorithm
int GCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;  // base case: when second number becomes 0, first number is the GCD
    }
    return GCD(num2, num1 % num2);  // recursive call with remainder
}

int main() {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    if (a < 0) a = -a;  // Make sure numbers are positive for GCD
    if (b < 0) b = -b;
    
    int gcd = GCD(a, b);
    
    printf("Greatest Common Divisor (GCD) of %d and %d is: %d\n", a, b, gcd);
    
    return 0;
}
