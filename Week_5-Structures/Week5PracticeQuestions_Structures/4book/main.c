#include <stdio.h>
#define SIZE 20
typedef struct
{
    char title[81];
    char lastname[81];
    char firstname[81];
    char publisher[81];
    int day, month, year;
} Booktype;
void readBook(Booktype *book);
void printBook(Booktype book);

int main()
{
    Booktype book[SIZE];
    char repeat = 'y',size=0;
    char dummych;

    do
    {
        readBook(&book[size]);
        printf("The book information:\n");
        printBook(book[size]);
        printf("Continue ('y' or 'n'): \n");
        scanf("%c", &repeat);
        scanf("%c", &dummych);
        size++;
    } while (repeat == 'y');
}

void readBook(Booktype *book)
{
    char dummych;

    printf("Enter the title of the book: \n");
    gets(book->title);

    printf("Enter the author's first name: \n");
    gets(book->firstname);

    printf("Enter the author's last name: \n");
    gets(book->lastname);

    printf("Enter date as (dd-mm-yy): \n");
    scanf("%d-%d-%d", &(book->day), &(book->month), &(book->year));
    scanf("%c", &dummych);

    printf("Enter the publisher name: \n");
    gets(book->publisher);
}

void printBook(Booktype book)
{
    printf("Title: %s \n", book.title);
    printf("Author: %s %s \n", book.firstname, book.lastname);
    printf("Date: %d-%d-%d \n", book.day, book.month, book.year);
    printf("Publisher: %s \n", book.publisher);
}
