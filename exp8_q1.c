/*PERSONAL NOTE ON VOID CAST
The void pointer cast is used in C programming primarily for printing or handling pointers generically. 
Here’s why:
	•	A void pointer ( void * ) is a special kind of pointer that can point to any data type 
    (int, float, char, etc.) but it has no specific type information about the data it points to.
	•	When printing addresses using  printf , the  %p  format specifier expects a pointer 
    of type  void *  for portability and safety reasons.
	•	Even if you have a pointer of some specific type like  int*  or  char* , 
    when printing with  %p , you cast it to  (void *)  so that the compiler 
    knows to treat it as a generic pointer to memory, avoiding warnings or errors.
	•	The cast doesn’t change the actual address; it’s just telling the 
    compiler how to interpret the pointer for printing.
	•	Additionally, since  void *  is the generic pointer type in C, 
    casting to  (void *)  is a common way to interface with functions 
    that accept or return generic pointers, like  malloc .
	•	Without this cast, some compilers might give warnings about 
    incompatible pointer types when printing addresses.
In summary, the  (void *)  cast is used when printing pointers with  
%p  to ensure the pointer is treated as a generic pointer type, guaranteeing compatibility and preventing compiler warnings or errors.
*/
#include <stdio.h>

int main() {
    // Declare variables of different types
    int num = 25;
    float pi = 3.14;
    char letter = 'A';

    // Declare pointers for each type and initialize with addresses of variables
    int *ptr_num = &num;         // Pointer to int, stores address of num
    float *ptr_pi = &pi;         // Pointer to float, stores address of pi
    char *ptr_letter = &letter;  // Pointer to char, stores address of letter

    // Print the addresses stored in pointers (the variable addresses)
    // %p  format specifier (with  (void*)  cast) prints the actual address held by the pointer.

    printf("Address stored in ptr_num: %p\n", (void*)ptr_num);
    printf("Address stored in ptr_pi: %p\n", (void*)ptr_pi);
    printf("Address stored in ptr_letter: %p\n", (void*)ptr_letter);

    // Print the values pointed to by the pointers (dereferencing pointers)
    printf("Value pointed to by ptr_num (num): %d\n", *ptr_num);
    printf("Value pointed to by ptr_pi (pi): %.2f\n", *ptr_pi);
    printf("Value pointed to by ptr_letter (letter): %c\n", *ptr_letter);

    // Also print original variables to compare
    printf("Original variable num: %d\n", num);
    printf("Original variable pi: %.2f\n", pi);
    printf("Original variable letter: %c\n", letter);

    return 0;   // Indicate successful termination
}
e
