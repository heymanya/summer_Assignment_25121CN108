//WAP TO WRITE FUNCTION TO FIND FACTORIAL.

#include<stdio.h>

int fact(int a);  //FUNCTION DECLARATION

int main(){
    int num ;

    printf("Enter the number:");
    scanf("%d", &num);

    printf("Factorial of %d : %d", num, fact(num));  //FUNCTION CALL

    return 0;
}

int fact(int a){  //FUNCTION DEFINITION
    int f=1 ;

    for( int i=1 ; i<= a ; i++){
       f = f * i;
    }
    return f;
}