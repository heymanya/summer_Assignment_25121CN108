//WAP TO CREATE EMPLOYEE MANAGEMENT SYSTEM.

#include<stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main(){
    struct Employee e;

    printf("Enter the ID :");
    scanf("%d", &e.id);

    printf("Enter the Name :");
    scanf(" %[^\n]", e.name);

    printf("Enter the Salary :");
    scanf("%f", &e.salary);

    printf("\n");

    printf("E M P L O Y E E   R E C O R D -----> \n");
    printf("Employee ID     : %d\n", e.id);
    printf("Employee Name   : %s\n", e.name);
    printf("Employee Salary : %.2f\n", e.salary);

    return 0;
}