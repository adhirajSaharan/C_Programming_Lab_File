#include <stdio.h>

int main() {
    // Outer block variable
    int outerVar = 10;
    
    printf("Outside inner block, outerVar = %d\n", outerVar); // Accessible here
    
    {
        // Inner block variable
        int innerVar = 20;
        printf("Inside inner block, outerVar = %d\n", outerVar); // Accessible in inner block
        printf("Inside inner block, innerVar = %d\n", innerVar); // Accessible in inner blo     ck
    }
    
    // printf("%d\n", innerVar); // Error: innerVar is not accessible outside its block
    
    return 0;
}

/*
Summary Table of Variable Accessibility in Different Code Blocks:

| Variable     | Declared In        | Accessible Inside Same Block | Accessible Outside Block |
|--------------|--------------------|------------------------------|--------------------------|
| outerVar     | main function block| Yes                          | Yes                      |
| innerVar     | inner block (curly braces) | Yes                          | No                       |

- Variables declared within a block are only accessible inside that block.
- Variables declared in an outer block are accessible inside inner blocks.
- Trying to access inner block variables outside results in a compile-time error.
*/
