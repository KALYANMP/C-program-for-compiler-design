#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 100
struct book {
    char title[100];
    char author[100];
    int year;
};
struct book books[MAX_BOOKS];
int num_books = 0;
void add_book() {
    struct book new_book;
    printf("Enter the book title: ");
    scanf("%s", new_book.title);
    printf("Enter the author name: ");
    scanf("%s", new_book.author);
    printf("Enter the publication year: ");
    scanf("%d", &new_book.year);
    books[num_books] = new_book;
    num_books++;
    printf("Book added successfully.\n");
}
void display_books() {
    printf("Book details:\n");
    for (int i = 0; i < num_books; i++) {
        printf("%d. Title: %s, Author: %s, Year: %d\n", i+1, books[i].title, books[i].author, books[i].year);
    }
}
void list_books_by_author() {
    char author_name[100];
    printf("Enter the author name: ");
    scanf("%s", author_name);
    printf("Books by %s:\n", author_name);
    for (int i = 0; i < num_books; i++) {
        if (strcmp(books[i].author, author_name) == 0) {
            printf("- %s\n", books[i].title);
        }
    }
}
void list_book_count() {
    printf("Total number of books in the library: %d\n", num_books);
}
int main() {
    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_books();
                break;
            case 3:
                list_books_by_author();
                break;
            case 4:
                list_book_count();
                break;
            case 5:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);
    return 0;
}

