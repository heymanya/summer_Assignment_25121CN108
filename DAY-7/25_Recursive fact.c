//WAP TO RECURSIVE FACTORIAL.

#include<stdio.h>

long int fact(int n); //FUNCTION DECLARATION

int main(){
    int num; 

    printf("Enter the number:");
    scanf("%d", &num);

    printf("Factorial = %ld" , fact(num)); //FUNCTION CALLING

    return 0;
}

//FUNCTION DEFINATION
long int fact(int n){
    if(n == 0|| n == 1){
        return 1;    
    }
    else{
        return n * fact(n-1); //RECURSIVE FUNCTION CALL
    }

}