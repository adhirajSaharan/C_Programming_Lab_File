#include <stdio.h>

int main() {
    int a, b, c, d;
    int L = 20;  // limit for cube combinations (we’ll check numbers made from cubes of 1 to 20)

    printf("Ramanujan Numbers up to limit %d:\n", L);
    printf("----------------------------------\n");

    // Loop through all possible combinations of a, b, c, d
    // Each represents one cube term in a^3 + b^3 = c^3 + d^3
    for (a = 1; a <= L; a++) {
        for (b = a + 1; b <= L; b++) { // b starts from a+1 to avoid duplicates like (1,12) and (12,1)
            for (c = a; c <= L; c++) {
                for (d = c + 1; d <= L; d++) {
                    // If the two cube pairs give the same result
                    if ((a * a * a + b * b * b) == (c * c * c + d * d * d)
                        && (a != c && a != d && b != c && b != d)) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               a * a * a + b * b * b, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
