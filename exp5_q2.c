#include <stdio.h>

int main() {
    int n, i;
    
    // Ask user for number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare array of size n
    
    // Read integers from user
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize counters to zero
    int positiveCount = 0;
    int negativeCount = 0;
    int evenCount = 0;
    int oddCount = 0;
    
    // Loop through the array and update counts
    for(i = 0; i < n; i++) {
        if(arr[i] > 0) {
            positiveCount++; // number is positive
        }
        else if(arr[i] < 0) {
            negativeCount++; // number is negative
        }
        
        if(arr[i] % 2 == 0) {
            evenCount++; // number is even
        }
        else {
            oddCount++; // number is odd
        }
    }
    
    // Print the counts
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);
    
    return 0;
}
