#include <stdio.h>
#include <math.h>

int main() {
    float population = 100000;  // initial population
    float rate = 0.10;          // 10% increase per year
    int years = 10;

    printf("Year\tPopulation\n");
    printf("------------------\n");

    for (int i = 1; i <= years; i++) {
        population = population * (1 + rate);
        printf("%d\t%.0f\n", i, population);
    }

    return 0;
}
