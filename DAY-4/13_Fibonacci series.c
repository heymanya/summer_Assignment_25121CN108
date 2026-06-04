//WAP TO GENERATE FIBONACCI SERIES.

#include<stdio.h>

int fibonacci(int n); // FUNCTION DECLARATION

int main(){
    int n, i;

    printf("Enter number of terms:");
    scanf("%d", &n);

    for(i =0; i< n; i++){
        printf("%d\t", fibonacci(i)); // FUNCTION CALLING
    }
    
    return 0;
}

//FUNCTION DEFINITION
int fibonacci(int n) {
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}