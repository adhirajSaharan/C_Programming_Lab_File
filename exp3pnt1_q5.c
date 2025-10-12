#include <stdio.h>

int main() {
    float l1, b1, l2, b2, l3, b3;
    float p1, p2, p3;
    int highest;

    // Input length and breadth for rectangle 1
    printf("Enter length and breadth of rectangle 1: ");
    scanf("%f %f", &l1, &b1);

    // Input length and breadth for rectangle 2
    printf("Enter length and breadth of rectangle 2: ");
    scanf("%f %f", &l2, &b2);

    // Input length and breadth for rectangle 3
    printf("Enter length and breadth of rectangle 3: ");
    scanf("%f %f", &l3, &b3);

    // Calculate the perimeters
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    // Use ternary operators to find the rectangle with the highest perimeter
    highest = (p1 > p2 && p1 > p3) ? 1 : (p2 > p3) ? 2 : 3;

    printf("Rectangle %d has the highest perimeter.\n", highest);

    return 0;
}
