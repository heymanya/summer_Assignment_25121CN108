//WAP TO CHECK WHETHER A NUMBER IS PALINDROME.

#include<stdio.h>
int main(){
    int num , temp, d , rev =0;

    printf("Enter the number:");
    scanf("%d", &num);

    temp = num;

    while(num != 0){
        d = num % 10; // LAST DIGIT
        rev = rev *10 + d;
        num = num/ 10; // REMOVE LAST DIGIT
    }

    if (temp == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}