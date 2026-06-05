//WAP TO CHECK STRONG NUMBER.

// [A Strong Number is a number whose sum of the factorials of its digits is equal to the number itself.]

#include<stdio.h>
int main(){
    int num, sum=0 , fact , temp , digit;

    printf("Enter the number:");
    scanf("%d", &num);

    temp = num;

    // SUM OF FACTORIAL OF DIGITS
    while(num != 0){
        digit = num %10;

        fact = 1;
        for( int i= 1; i<=digit ; i++){
            fact = fact * i;
        }

        sum = sum + fact;
        num = num/10 ;
    }

    if(sum == temp){
        printf("%d is a strong number.", temp);
    }
    else{
        printf("%d is not a strong number.", temp);
    }

    return 0;
}