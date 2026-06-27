//WAP TO CREATE MARKSHEET GENERATION SYSTEM.

#include<stdio.h>

struct Student {
    int roll;
    char name[30];
    float sub1 , sub2 , sub3 , percentage , total ;
};

int main(){
    struct Student s;

    printf("Enter the Roll No. :");
    scanf("%d", &s.roll);

    printf("Enter the Student Name :");
    scanf(" %[^\n]", s.name);

    printf("Enter the Marks of Subject 1 :");
    scanf("%f", &s.sub1);

    printf("Enter the Marks of Subject 2 :");
    scanf("%f", &s.sub2);

    printf("Enter the Marks of Subject 3 :");
    scanf("%f", &s.sub3);

    s.total = s.sub1 + s.sub2 + s.sub3;
    s.percentage = s.total / 3;

    printf("\n");

    printf("M A R K S H E E T ------>\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Subject 1   : %.2f\n", s.sub1);
    printf("Subject 2   : %.2f\n", s.sub2);
    printf("Subject 3   : %.2f\n", s.sub3);
    printf("Total Marks : %.2f\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);

    return 0;
}