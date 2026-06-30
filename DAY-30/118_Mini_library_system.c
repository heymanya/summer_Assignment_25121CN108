//WAP TO CREATE MINI LIBRARY SYSTEM.

#include <stdio.h>

int main()
{
    int n, i;
    int bookID[100];
    char bookName[100][50];
    char author[100][50];
    float price[100];

    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Input Book Details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookID[i]);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", bookName[i]);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", author[i]);

        printf("Enter Price: ");
        scanf("%f", &price[i]);
    }

    // Display Book Details
    printf("\n L I B R A R Y    R E C O R D ----->\n");
    printf("Book ID\tBook Name\t\tAuthor\t\tPrice\n");
    printf("\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-20s%-15s%.2f\n",
               bookID[i], bookName[i], author[i], price[i]);
    }

    return 0;
}