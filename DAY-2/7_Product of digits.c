//WAP TO FIND PRODUCT OF DIGITS.

#include<stdio.h>
int main(){
    int num, d, product =1;

    printf("Enter a number:");
    scanf("%d", &num);

    while(num != 0){
        d = num%10;
        product = product * d;
        num = num/10;
    }
    printf("The product of digits = %d", product);

    return 0;
}
