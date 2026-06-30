//WAP TO CREATE MINI EMPLOYEE MANAGEMENT SYSTEM.

#include <stdio.h>

int main()
{
    int n, i;
    int empID[100];
    char empName[100][50];
    char department[100][50];
    float salary[100];

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input Employee Details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empID[i]);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", empName[i]);

        printf("Enter Department: ");
        scanf(" %[^\n]", department[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display Employee Details
    printf("\n E M P L O Y E E    R E C O R D S ------> \n");
    printf("ID\tName\t\tDepartment\tSalary\n");
    printf("\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-15s%-15s%.2f\n",
               empID[i], empName[i], department[i], salary[i]);
    }

    return 0;
}