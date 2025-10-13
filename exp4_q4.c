#include <stdio.h>

void staticExample() {
    // Static local variable: retains value between calls
    static int counter = 0;
    counter++;
    printf("Static counter value: %d\n", counter);
}

int main() {
    staticExample();  // Prints 1
    staticExample();  // Prints 2
    staticExample();  // Prints 3
    return 0;
}

/*
Summary:

| Variable Type        | Scope                    | Lifetime               | Behavior                         |
|---------------------|---------------------------|------------------------|---------------------------------|
| Static local variable | Local to function         | Entire program runtime | Initialized once, retains value between calls |
| Normal local variable | Local to function         | Lifetime of function call | Initialized each time function is called, does not retain value |

Explanation:
- Static local variables keep their value between function calls.
- Regular local variables are re-initialized every time the function is called.
*/
