#include <stdio.h>

int main() {
    // Declare variables for coordinates
    float x1, y1, x2, y2, x3, y3, area;

    // Input the coordinates from the user
    printf("Enter x1 and y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter x2 and y2: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter x3 and y3: ");
    scanf("%f %f", &x3, &y3);

    // Calculate the area of the triangle formed by the three points
    // If the area is zero, points are collinear
    area = 0.5 * ((x1*(y2 - y3)) + (x2*(y3 - y1)) + (x3*(y1 - y2)));

    if (area == 0)
        printf("The points are collinear.\n");
    else
        printf("The points are not collinear.\n");

    return 0;
}
