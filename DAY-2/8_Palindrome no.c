//WAP TO CHECK WHETHER A NUMBER IS PALINDROME.

#include<stdio.h>
int main(){
    int num, temp, d, new =0;

    printf("Enter a number:");
    scanf("%d", &num);

    temp = num;
    while(num != 0){
        d = num %10;
        new = new* 10 + d;
        num = num/10;
    }
    if(new==temp){
        printf("The no. is palindrome.");
    }
    else{
        printf("The no. is not palindrome.");
    }

    return 0;
}
