#include <stdio.h>

int main() {
    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest, secondLargest;
    
    // Initialize largest and secondLargest
    if (n < 2) {
        printf("List must contain at least two integers.\n");
        return 1;
    }
    
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }
    
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    printf("The second largest integer is: %d\n", secondLargest);
    return 0;
}
