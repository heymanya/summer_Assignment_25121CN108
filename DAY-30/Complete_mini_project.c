//WAP TO DEVELOP COMPLETE MINI PROJECT USIING ARRAYS, STRINGS AND FUNCTIONS.

#include <stdio.h>

int roll[100];
char name[100][50];
float marks[100];
int n;

void input();
void display();

int main()
{
    input();
    display();
    return 0;
}

void input()
{
    int i;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Enter Roll Number: ");
        scanf("%d",&roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]",name[i]);

        printf("Enter Marks: ");
        scanf("%f",&marks[i]);
    }
}

void display()
{
    int i;

    printf("\n S T U D E N T    R E C O R D  -----> \n");

    printf("Roll No.\tName\t\tMarks\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t\t%-15s%.2f\n",
               roll[i],name[i],marks[i]);
    }
}