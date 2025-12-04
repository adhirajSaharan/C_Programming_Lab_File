#include <stdio.h>       // Needed for printf and gets functions
#include <string.h>      // Needed for strcpy function

// Define a union for address details.
// Remember: Union can hold only one member at a time in its memory location.
union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[30];
    char zip[10];
};

int main() {
    // Declare a variable of type Address union
    union Address addr;

    // At any time, only ONE of these (name, home_address, etc.) 
    // actually exists in 'addr', because union shares memory for all its members

    // Add your present address info below
    // Suppose your present address is hostel address, city, state and zip
  
    // Store your hostel address
    strcpy(addr.hostel_address, "ABC Hostel, UPES, Bidholi");
    // Now addr.hostel_address holds the hostel address, 
    // but all other members will be overwritten because they share memory

    // Display your present address
    printf("Present Hostel Address: %s\n", addr.hostel_address);

    // Store city information
    strcpy(addr.city, "Dehradun");
    // Now addr.city holds "Dehradun", but the hostel address is lost
    printf("Present City: %s\n", addr.city);

    // Store state information
    strcpy(addr.state, "Uttarakhand");
    // Now addr.state holds "Uttarakhand", but 'city' is lost
    printf("Present State: %s\n", addr.state);

    // Store zip code
    strcpy(addr.zip, "248007");
    // Now addr.zip holds "248007", but 'state' is lost
    printf("Present Zip Code: %s\n", addr.zip);

    // If you print addr.hostel_address or addr.city again here,
    // you'll get a wrong or garbage value, because union only retains latest assigned member!

    // If you want to show full address together, unions are NOT designed for that.
    // For holding multiple strings at once, use struct. This task is just to show how union works.

    return 0;
}
