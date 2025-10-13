#include <stdio.h>

void localFunction() {
    int localVar = 10;  // Local variable declared inside the function
    printf("Inside function, localVar = %d\n", localVar);
}

int main() {
    localFunction();
    // printf("%d\n", localVar); // Error: localVar is not accessible outside the function where it is declared
    return 0;
}

/*
Summary of Local vs Global Variables in C:

| Aspect                   | Local Variable                | Global Variable                    |
|--------------------------|-------------------------------|------------------------------------|
| Declared inside function | Yes                           | No                                 |
| Accessible outside function | No                         | Yes                                |
| Lifetime            | Till function execution ends       | Entire program execution                |
| Scope               | Local to the function/block        | Global (whole program/file)             |
| Usage               | Temporary data within function.    | Data shared across functions            |

This distinction is important for controlling data visibility and lifetime.
*/
