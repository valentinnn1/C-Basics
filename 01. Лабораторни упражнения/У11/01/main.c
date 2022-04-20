#include <stdio.h>
#include <stdlib.h>

typedef struct Book
{
    char title[50];
    char author[50];
    int year;
    float price;
}Book;

void Input(int n, Book books[])
{
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        printf("Enter a title: ");
        scanf("%[^\n]s",books[i].title);
        fflush(stdin);
        printf("Enter an author: ");
        scanf("%[^\n]s",books[i].author);
        printf("Enter year: ");
        scanf("%d",&books[i].year);
        printf("Enter price: ");
        scanf("%f",&books[i].price);
    }
}

void PrintAfter2005(int n, Book books[])
{
    for(int i=0; i<n; i++)
    {
        if(books[i].year>=2005)
        {
        printf("Books After 2005\n%s %s %d %.2f",books[i].title,books[i].author,books[i].year,books[i].price);
        }
    }
}

void SearchAuthor(int n, Book books[])
{
    char searching[40];
    scanf("%[^\n]s",searching);
    fflush(stdin);
    for(int i=0; i<n; i++)
    {
        if(!strcmp(searching,books[i].author))
        {
        printf("%s %s %d %.2f",books[i].title,books[i].author,books[i].year,books[i].price);
        }
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    Book book[n];
    Input(n,book);
    PrintAfter2005(n,book);
    SearchAuthor(n,book);
    return 0;
}
