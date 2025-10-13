#include <stdio.h>

// Function to find factorial of a number using recursion
long long FACT(int n) {
    if (n == 0) {
        return 1;  // factorial of 0 is 1
    }
    return n * FACT(n - 1);  // recursive call
}

// Function to compute binomial coefficient nCr
long long binomialCoeff(int n, int r) {
    return FACT(n) / (FACT(r) * FACT(n - r));
}

int main() {
    int n, r;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    printf("Enter value of r: ");
    scanf("%d", &r);
    
    // check valid input
    if (r > n || r < 0) {
        printf("Invalid input! r should be between 0 and n.\n");
        return 0;
    }
    
    // calculate binomial coefficient
    long long result = binomialCoeff(n, r);
    
    printf("Binomial coefficient C(%d, %d) = %lld\n\n", n, r, result);
    
    // print table for all r from 0 to n
    printf("Table of binomial coefficients for n = %d:\n", n);
    printf("r   C(%d, r)\n", n);
    printf("----------------\n");
    
    for (int i = 0; i <= n; i++) {
        printf("%d   %lld\n", i, binomialCoeff(n, i));
    }
    
    return 0;
}

/*
Tabulate the results for different values of n and r with suitable messages:

- The program reads n and r from the user.
- It computes the binomial coefficient C(n, r) using the factorial-based recursive method.
- It displays the computed value with a clear message.
- Then it prints a table listing all values of C(n, r) for r = 0 to n.
- This helps understand the pattern and distribution of binomial coefficients for given n.

Example Output:

Enter value of n: 5
Enter value of r: 2
Binomial coefficient C(5, 2) = 10

Table of binomial coefficients for n = 5:
r   C(5, r)
----------------
0   1
1   5
2   10
3   10
4   5
5   1

This output clearly shows the factorial-based calculation and tabulated results for all r values.
*/
