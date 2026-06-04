//WAP TO FIND Nth FIBONACCI TERM.

#include<stdio.h>

int fibonacci(int n);  //FUNCTION DECLARATION

int main(){
    int n;

    printf("Enter the number:");
    scanf("%d", &n);

    printf("Fibonacci term = %d", fibonacci(n));  //FUNCTION CALLING

    return 0;
}

//FUNCTION DEFINITION
int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
    
}