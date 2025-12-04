/*
In C/C++, left shift (<<) and right shift (>>) operators are 
binary bitwise operators that are used to shift the bits 
either left or right of the first operand by the number of 
positions specified by the second operand allowing efficient data manipulation.


LEFT SHIFT
The left shift(<<) is a binary operator that takes two numbers, 
left shifts the bits of the first operand, and the 
second operand decides the number of places to shift. 
In other words, left-shifting an integer "a" with an integer 
"b" denoted as '(a<<b)' is equivalent to multiplying a with 2^b (2 raised to power b). 

Example: Let's take a=21; which is 10101 in Binary Form.
 Now, if “a is left-shifted by 1” i.e a = a << 1 
 then a will become a = a * ( 2 ^ 1). 
 Thus, a = 21 * (2 ^ 1) = 42 which can be written as 101010.

But if the size of the data type of a is only 5 bits, 
then the first bit will be discarded we will be left with a = 10, 
which is 01010 in binary.

a << b;
where,

a is the integer value to be shifted.
b specifies how many positions to shift the bits.


RIGHT SHIFTING
Right Shift(>>) is a binary operator that takes two numbers, 
right shifts the bits of the first operand, 
and the second operand decides the number of places to shift. 
In other words, right-shifting an integer 
"a" with an integer "b" denoted as '(a>>b)'
is equivalent to dividing a with 2^b. 




*/

#include <stdio.h>

int main() {
  
   
    unsigned char a = 25;

    //left shift a by 1
    printf("a << 1 = %d\n", (a << 1));
  
  	//right shift a by 2
  	printf("a >> 2 = %d", (a >> 2));

    return 0;
}
