#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check validity of triangle
    if (a + b <= c || b + c <= a || c + a <= b) {
        printf("Triangle is not valid.\n");
        return 0;
    }

    // Check equilateral
    if (a == b && b == c) {
        printf("Triangle is equilateral.\n");
    }
    // Check isosceles
    else if (a == b || b == c || c == a) {
        printf("Triangle is isosceles.\n");
    }
    // Check right angled (Pythagoras theorem)
    else if ((a * a == b * b + c * c) ||
             (b * b == a * a + c * c) ||
             (c * c == a * a + b * b)) {
        printf("Triangle is right angled.\n");
    }
    else {
        printf("Triangle is scalene.\n");
    }
    return 0;
}
