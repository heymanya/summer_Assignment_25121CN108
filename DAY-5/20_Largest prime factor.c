//WAP TO FIND LARGEST PRIME FACTOR.

#include<stdio.h>
int main(){
    int num , largestPrimeFactor, original;

    printf("Enter the number:");
    scanf("%d", &num);

    original = num;

    //LARGEST PRIME FACTOR 
    if(num <= 1){
        printf("No prime factors");
        return 0;
    }
    while(num % 2 == 0){
        largestPrimeFactor =2 ;
        num = num /2;
    }
    for(int i = 3; i<= num ; i += 2){
        while(num % i == 0){
            largestPrimeFactor =i;
            num =num /i; 
        }
    }

    printf("%d is the largest prime factor of %d", largestPrimeFactor ,original);

    return 0;
}