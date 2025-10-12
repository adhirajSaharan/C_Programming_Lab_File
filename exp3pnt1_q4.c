#include <stdio.h>

int main() {
    int year, i, totalDays = 0, dayOfWeek;

    // Input the year
    printf("Enter the year: ");
    scanf("%d", &year);

    // Count days from 01/01/01 to 01/01/year (not inclusive)
    for (i = 1; i < year; i++) {
        // Check leap year
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            totalDays += 366;
        else
            totalDays += 365;
    }

    dayOfWeek = totalDays % 7;

    // Print result using switch
    printf("1st January %d is a ", year);
    switch (dayOfWeek) {
        case 0: printf("Monday"); break;
        case 1: printf("Tuesday"); break;
        case 2: printf("Wednesday"); break;
        case 3: printf("Thursday"); break;
        case 4: printf("Friday"); break;
        case 5: printf("Saturday"); break;
        case 6: printf("Sunday"); break;
    }
    printf(".\n");
    return 0;
}
