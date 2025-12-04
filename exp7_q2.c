#include <stdio.h> 
// Include standard input-output library for using printf and scanf functions

int main() {
    // Main function - execution starts here

    // Declare a 2D character array to store names of 100 employees
    // Each name can have a maximum length of 50 characters (including null terminator)
    //The first dimension represents the employee index (which employee), 
    //and the second dimension represents the characters in that employee’s name.
    char employeeNames[100][50];

    // Declare a float array to store the basic pay for each employee
    float basicPay[100];

    // Declare a float array to store the gross salary for each employee
    float grossSalary[100];

    // Loop from 0 to 99 (total 100 iterations) to collect data for each employee
    for (int i = 0; i < 100; i++) {
        printf("Enter name of employee %d: ", i + 1);
    /*	The variable  i  starts at 0 because C array indices start at 0.
		But counting people naturally starts at 1.
		Adding 1 to  i  makes the prompt friendlier and easier to understand for users (e.g., “Enter name of employee 1” rather than “employee 0”).
		This is purely to make the user interface intuitive.
    */
        // Read a whole line including spaces until newline is encountered,
        // store it in the employeeNames array at index 'i'
        scanf(" %[^\n]", employeeNames[i]);

        printf("Enter basic pay of %s: ", employeeNames[i]);
        // Read the float input representing basic pay and store in the array at index 'i'
        scanf("%f", &basicPay[i]);

        // Calculate DA (Dearness Allowance) as 52% of basic pay
        float DA = 0.52 * basicPay[i];

        // Calculate gross salary as sum of basic pay and DA
        grossSalary[i] = basicPay[i] + DA;
    }

    // Print the heading for output table
    printf("\nEmployee Name\tGross Salary\n");
    printf("---------------------------------\n");

    // Loop again to print each employee's name and gross salary
    for (int i = 0; i < 100; i++) {
        // Print the employee's name and gross salary formatted to 2 decimal places
        printf("%s\t\t%.2f\n", employeeNames[i], grossSalary[i]);
    }

    return 0; 
    // Return 0 indicates successful program termination
}
e
