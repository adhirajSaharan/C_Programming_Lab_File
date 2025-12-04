#include <stdio.h>

int main() {
    // Declare and initialize variables
    int int_arr[3] = {10, 20, 30};
    float float_arr[3] = {1.1, 2.2, 3.3};
    char char_arr[3] = {'A', 'B', 'C'};

    // Declare pointers and initialize with address of first element of each array
    //n C, the name of an array (e.g.,  int_arr ) itself represents the address of its first element. 
    int *ptr_int = int_arr;
    float *ptr_float = float_arr;
    char *ptr_char = char_arr;
    /*So pointer initialization explanation:
	•	 int *ptr_int = int_arr;  Assigns pointer  ptr_int  to the address of the first element of  int_arr .
	•	You can then access  int_arr  elements by pointer arithmetic:
	•	 *(ptr_int + 1)  is  int_arr  (20),
	•	 *(ptr_int + 2)  is  int_arr  (30).
    */

    // Print initial addresses and values
    printf("Initial int pointer address: %p, points to value: %d\n", (void*)ptr_int, *ptr_int);
    printf("Initial float pointer address: %p, points to value: %.1f\n", (void*)ptr_float, *ptr_float);
    printf("Initial char pointer address: %p, points to value: %c\n", (void*)ptr_char, *ptr_char);

    // Increment pointers (pointer arithmetic: moves to next element in array)
    ptr_int++;    // Moves ahead by sizeof(int) bytes
    ptr_float++;  // Moves ahead by sizeof(float) bytes
    ptr_char++;   // Moves ahead by sizeof(char) bytes

    // Print addresses and values after increment
    printf("\nAfter incrementing pointers:\n");
    printf("int pointer address: %p, points to value: %d\n", (void*)ptr_int, *ptr_int);
    printf("float pointer address: %p, points to value: %.1f\n", (void*)ptr_float, *ptr_float);
    printf("char pointer address: %p, points to value: %c\n", (void*)ptr_char, *ptr_char);

    // Decrement pointers (go back to previous element)
    ptr_int--;
    ptr_float--;
    ptr_char--;

    // Print addresses and values after decrement
    printf("\nAfter decrementing pointers:\n");
    printf("int pointer address: %p, points to value: %d\n", (void*)ptr_int, *ptr_int);
    printf("float pointer address: %p, points to value: %.1f\n", (void*)ptr_float, *ptr_float);
    printf("char pointer address: %p, points to value: %c\n", (void*)ptr_char, *ptr_char);

    return 0;
}
