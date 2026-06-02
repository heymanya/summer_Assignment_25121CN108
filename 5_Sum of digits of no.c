//WAP TO FIND SUM OF DIGITS OF A NUMBER.

#include<stdio.h>
int main(){
    int num, d, sum= 0;

    printf("Enter a number:");
    scanf("%d", &num);

    while(num != 0){
        d= num %10;
        sum = sum + d;
        num = num/10;
    }
    printf("The sum of digits of the number is= %d", sum);

    return 0;
}