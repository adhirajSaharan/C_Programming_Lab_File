#include <stdio.h>

// Define the Book structure with four members
struct Book {
    int book_id;        // Unique identifier for the book
    char title[100];    // Title of the book (string of max length 99)
    char author[100];   // Author's name (string of max length 99)
    float price;        // Price of the book
};

// Function to print book details; takes a Book struct as argument
void printBookDetails(struct Book b) {
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    // Declare and initialize a Book structure variable
    struct Book myBook;

    // Input book details from user
    printf("Enter Book ID: ");
    scanf("%d", &myBook.book_id);

    printf("Enter Title: ");
    scanf(" %[^\n]", myBook.title);  // Read full line including spaces

    printf("Enter Author: ");
    scanf(" %[^\n]", myBook.author); // Read full line including spaces

    printf("Enter Price: ");
    scanf("%f", &myBook.price);

    // Call function to print the book details
    printf("\nBook Details:\n");
    printBookDetails(myBook);

    return 0;
}
