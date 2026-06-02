//WAP TO REVERSE A NUMBER.

#include<stdio.h>
int main(){
    int num, d, rev=0;

    printf("Enter a number:");
    scanf("%d", &num);

    while(num != 0){
        d = num %10;
        rev = rev *10 + d;
        num = num/10;
    }
    printf("The reversed number =%d", rev);
    return 0;

}