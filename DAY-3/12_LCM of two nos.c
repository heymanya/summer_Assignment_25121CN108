//WAP TO FIND LCM OF TWO NUMBERS.

#include<stdio.h>
int main(){
    int a , b , num;

    printf("Enter two numbers a and b:");
    scanf("%d %d", &a , &b);
    
    num = (a>b) ? a : b ;

    while(1){
        if(num %a ==0 && num %b ==0){
            printf(" LCM of %d and %d = %d\n", a , b , num);
            break;
        }
        num++;
    }
    return 0;
}