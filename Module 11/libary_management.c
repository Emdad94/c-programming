#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_BORROWERS 100

struct Book {
    int bookID;
    char title[100];
    char author[100];
    int available;
};

struct Borrower {
    int borrowerID;
    char name[100];
};

struct Transaction {
    int bookID;
    int borrowerID;
};

struct Book books[MAX_BOOKS];
struct Borrower borrowers[MAX_BORROWERS];
struct Transaction transactions[MAX_BOOKS];
int numBooks = 0;
int numBorrowers = 0;
int numTransactions = 0;

void addBook() {
    struct Book book;
    printf("Enter book ID: ");
    scanf("%d", &book.bookID);
    printf("Enter book title: ");
    scanf(" %[^\n]s", book.title);
    printf("Enter book author: ");
    scanf(" %[^\n]s", book.author);
    book.available = 1;
    books[numBooks++] = book;
    printf("Book added successfully!\n");
}

void displayBooks() {
    printf("Book ID\tTitle\tAuthor\tAvailable\n");
    for (int i = 0; i < numBooks; i++) {
        printf("%d\t%s\t%s\t%s\n", books[i].bookID, books[i].title, books[i].author, (books[i].available ? "Yes" : "No"));
    }
}

void addBorrower() {
    struct Borrower borrower;
    printf("Enter borrower ID: ");
    scanf("%d", &borrower.borrowerID);
    printf("Enter borrower name: ");
    scanf(" %[^\n]s", borrower.name);
    borrowers[numBorrowers++] = borrower;
    printf("Borrower added successfully!\n");
}

void displayBorrowers() {
    printf("Borrower ID\tName\n");
    for (int i = 0; i < numBorrowers; i++) {
        printf("%d\t\t%s\n", borrowers[i].borrowerID, borrowers[i].name);
    }
}

void borrowBook() {
    int bookID, borrowerID;
    printf("Enter book ID to borrow: ");
    scanf("%d", &bookID);
    printf("Enter borrower ID: ");
    scanf("%d", &borrowerID);
    
    // Check if book and borrower exist
    int bookIndex = -1;
    int borrowerIndex = -1;
    for (int i = 0; i < numBooks; i++) {
        if (books[i].bookID == bookID) {
            bookIndex = i;
            break;
        }
    }
    for (int i = 0; i < numBorrowers; i++) {
        if (borrowers[i].borrowerID == borrowerID) {
            borrowerIndex = i;
            break;
        }
    }
    
    if (bookIndex == -1 || borrowerIndex == -1) {
        printf("Book or borrower not found!\n");
        return;
    }
    
    if (!books[bookIndex].available) {
        printf("Book is not available for borrowing!\n");
        return;
    }
    
    // Update book availability and create transaction
    books[bookIndex].available = 0;
    struct Transaction transaction;
    transaction.bookID = bookID;
    transaction.borrowerID = borrowerID;
    transactions[numTransactions++] = transaction;
    printf("Book borrowed successfully!\n");
}

void returnBook() {
    int bookID;
    printf("Enter book ID to return: ");
    scanf("%d", &bookID);
    
    // Check if book exists and is borrowed
    int bookIndex = -1;
    for (int i = 0; i < numBooks; i++) {
        if (books[i].bookID == bookID) {
            bookIndex = i;
            break;
        }
    }
    
    if (bookIndex == -1) {
        printf("Book not found!\n");
        return;
    }
    
    if (books[bookIndex].available) {
        printf("Book is not borrowed!\n");
        return;
    }
    
    // Update book availability
    books[bookIndex].available = 1;
    printf("Book returned successfully!\n");
}

int main() {
    int choice;
    
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Add Borrower\n");
        printf("4. Display Borrowers\n");
        printf("5. Borrow Book\n");
        printf("6. Return Book\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                addBorrower();
                break;
            case 4:
                displayBorrowers();
                break;
            case 5:
                borrowBook();
                break;
            case 6:
                returnBook();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);
    
    return 0;
}
