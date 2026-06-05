//WAP TO CHECK PERFECT NUMBER.

// [A Perfect Number is a positive integer that is equal to sum of all its proper divisors (factors excluding the number itself).]

#include<stdio.h>
int main(){
    int num , i , sum =0;
    
    printf("Enter the number:");
    scanf("%d", &num);

    for(i=1 ; i< num ; i++){
        if(num % i == 0){
             sum = sum + i;
        }
    }

    if(sum == num){
        printf("%d is a perfect number", num);
    }
    else{
        printf("%d is not a perfect number", num);
    }

    return 0;
}