#include <stdio.h>

int main() {
    char name[30];
    int age;

    printf("Enter your name: ");
    scanf("%29s", name);  // reads one word (no spaces) up to 29 chars

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello, %s. You are %d years old.\n", name, age);

    return 0;
}
