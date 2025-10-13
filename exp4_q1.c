#include <stdio.h>

// Global variable declaration
int globalCounter = 0;

// Function to increment the global variable
void incrementCounter() {
    globalCounter++;
    printf("Counter after increment: %d\n", globalCounter);
}

// Function to reset the global variable
void resetCounter() {
    globalCounter = 0;
    printf("Counter reset to: %d\n", globalCounter);
}

int main() {
    printf("Initial counter value: %d\n", globalCounter);
    incrementCounter();
    incrementCounter();
    resetCounter();
    incrementCounter();
    return 0;
}
