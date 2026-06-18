//WAP TO WRITE FUNCTION TO FIND SUM OF TWO NUMBERS.

#include<stdio.h>

int sum(int a, int b); //FUNCTION DECLARATION

int main(){
    int a, b ;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    printf("Sum=%d", sum(a, b)); //FUNCTION CALL
    return 0;
    
}

int sum(int a , int b){  //FUNCTION DEFINITION
    return a + b;
}