//WAP TO CREATE SALARY MANAGEMENT SYSTEM.

#include <stdio.h>

struct Salary
{
    int empId;
    char name[50];
    float basicSalary, hra, da, totalSalary;
};

int main()
{
    struct Salary s;

    printf("Enter Employee ID: ");
    scanf("%d", &s.empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &s.basicSalary);

    printf("\n");

    // Calculate HRA and DA
    s.hra = 0.20 * s.basicSalary;   // 20% HRA
    s.da = 0.10 * s.basicSalary;    // 10% DA

    // Calculate Total Salary
    s.totalSalary = s.basicSalary + s.hra + s.da;

    printf("S A L A R Y    R E C O R D ----> \n");
    printf("Employee ID   : %d\n", s.empId);
    printf("Employee Name : %s\n", s.name);
    printf("Basic Salary  : %.2f\n", s.basicSalary);
    printf("HRA (20%)     : %.2f\n", s.hra);
    printf("DA (10%)      : %.2f\n", s.da);
    printf("Total Salary  : %.2f\n", s.totalSalary);

    return 0;
}