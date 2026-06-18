//WAP TO WRITE FUNCTION TO CHECK PRIME.

#include<stdio.h>

int isprime(int a); //FUNCTION DECLARATION

int main(){
    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    if(isprime(num)){  //FUNCTION CALL
        printf("%d is a PRIME number", num);
    }
    else{
        printf("%d is not a PRIME number", num);
    }

    return 0;
}

int isprime(int a){  //FUNCTION DEFINITION
    if(a<= 1){
        return 0;
    }

    for(int i=2 ; i<a ; i++){
        if(a % i == 0){
            return 0;
        }
    }
    return 1;
}