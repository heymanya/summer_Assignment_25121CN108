//WAP TO WRITE FUNCTION FOR FIBONACCI.

#include<stdio.h>

int fib(int a);  //FUNCTION DECLARATION

int main(){
    int num; 

    printf("Enter the number of terms:");
    scanf("%d", &num);

    printf("Fibonacci series:");

    for(int i=0 ; i< num ; i++){
        printf("%d", fib(i));  //FUNCTION CALL
    }
    return 0;
}

int fib(int a) {  //FUNCTION DEFINITION
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    else
        return fib(a - 1) + fib(a - 2);
}