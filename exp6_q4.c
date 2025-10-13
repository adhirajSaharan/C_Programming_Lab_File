#include <stdio.h>

// Function to check if a number is prime
int ISPRIME(int num) {
    if (num <= 1) {
        return 0;  // numbers less than or equal to 1 are not prime
    }
    
    // Check for factors from 2 to num/2
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;  // found a divisor, not prime
        }
    }
    
    return 1;  // no divisors found, number is prime
}

int main() {
    int start, end;
    
    // Ask user for range start and end
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    
    // Print primes in the range
    printf("Prime numbers between %d and %d are:\n", start, end);
    
    for (int i = start; i <= end; i++) {
        if (ISPRIME(i)) {  // call ISPRIME function for each number
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
