#include <stdio.h>

// Recursive function to find Fibonacci number at position num
int FIBO(int num) {
    if (num == 0) {
        return 0;  // Base case: Fibonacci(0) = 0
    }
    if (num == 1) {
        return 1;  // Base case: Fibonacci(1) = 1
    }
    return FIBO(num - 1) + FIBO(num - 2);  // Recursive call
}

int main() {
    int num;
    
    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &num);
    
    printf("Fibonacci sequence up to %d terms:\n", num);
    
    for (int i = 0; i < num; i++) {
        printf("%d ", FIBO(i));
    }
    
    printf("\n");
    
    return 0;
}
