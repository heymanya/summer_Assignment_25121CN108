//WAP TO WRITE FUNCTION TO FIND MAXIMUM.

#include<stdio.h>

int maximum(int a, int b); //FUNCTION DECLARATION


int main(){
    int num1, num2;

    printf("Enter two numbers:");
    scanf("%d %d", &num1 , &num2);

    printf("Maximum: %d", maximum(num1 , num2));  //FUNCTION CALL

    return 0;
}

int maximum(int a, int b){  //FUNCTION DEFINITION
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}