//WAP TO CHECK WHETHER A NUMBER IS PALINDROME.

#include<stdio.h>
int main(){
    int num, temp, rev=0 , remainder;

    printf("Enter a number:");
    scanf("%d", &num);

    temp= num;

    while(num!=0){
        remainder = num % 10;
        rev = rev *10 + remainder;
        num = num/10;
    }

    if( temp == rev){
        printf("The no. is palindrome.", temp);
    }
    else{
        printf("The no. is not palindrome.", temp);
    }
    return 0;
}
