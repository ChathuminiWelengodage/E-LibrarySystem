#include <stdio.h>
//The structure of Library
struct library
{
    char book_name[20];
    char author[20];
    int pages;
    float price;
};

    struct library lib[100];

    int count = 0;
    int input;

void showMenu(){
    printf("\n---------------WELCOME TO E-LIBRARY---------------\n");
    
    printf("1. Add book information\n");
    printf("2. Display book information\n");
    printf("3. List all books of given author\n");
    printf("4. List the count of books in the library\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&input);
}
int main() {
    while(1) {       // Infinite loop until user chooses Exit
        showMenu();  // Show the menu
        switch(input) {
            case 1:
                // Call function to add book
                break;
            case 2:
                // Call function to display books
                break;
            case 3:
                // Call function to list books by author
                break;
            case 4:
                printf("Total books in library: %d\n", count);
                break;
            case 5:
                printf("Exiting...\n");
                return 0; // Exit program
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

    
