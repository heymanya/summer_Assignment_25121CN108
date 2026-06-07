//WAP TO RECURSIVE SUM OF DIGITS.

#include<stdio.h>

int sum(int n);  // FUNCTION DECLARATION

int main (){
    int n ;

    printf("Enter the number:");
    scanf("%d", &n);

    printf("Sum of digits = %d", sum(n));   //FUNCTION CALLING

    return 0;
}

//FUNCTION DEFINITION
int sum(int num){
    if(num == 0){
        return 0;
    }
    return num% 10 + sum(num/10); //RECURSIVE FUNCTION CALL
}