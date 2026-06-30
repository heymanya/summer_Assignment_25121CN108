//WAP TO CREATE STUDENT RECORD SYSTEM USING ARRAYS AND STRINGS.

#include <stdio.h>

int main()
{
    int n, i;
    int roll[100];
    char name[100][50];
    float marks[100];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input Student Records
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display Student Records
    printf("\n S T U D E N T    R E C O R D S  ------> \n");

    printf("\nRoll No.\tName\t\tMarks\n");
    printf("\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t\t%-15s%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}