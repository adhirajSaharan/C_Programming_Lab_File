#include <stdio.h>
#include <string.h>

// Function to reverse a string
void REVERSE(char str[]) {
    int length = strlen(str);  // Find the length of the string
    int i, j;
    char temp;
    
    // Swap characters from start and end moving towards the middle
    for(i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    
    // Ask user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present from fgets
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    
    // Call REVERSE function to reverse the string
    REVERSE(str);
    
    // Print the reversed string
    printf("Reversed string: %s\n", str);
    
    return 0;
}
