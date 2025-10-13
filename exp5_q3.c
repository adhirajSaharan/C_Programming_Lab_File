#include <stdio.h>

int main() {
    int n, i, freq = 0, num;
    
    // Ask user how many numbers to enter
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    int arr[n]; // Create an array of size n
    
    // Read numbers into the array
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Ask which number to find frequency of
    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);
    
    // Loop through array and count how many times num appears
    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            freq++; // Found one occurrence of num
        }
    }
    
    // Print the frequency
    printf("The number %d appears %d times in the list.\n", num, freq);
    
    return 0;
}
