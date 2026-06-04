//WAP TO CHECK ARMSTRONG NUMBER.

#include<stdio.h>
#include<math.h>

int main(){
    int num, temp1 , temp2 , count= 0, digit , rem , sum=0;

    printf("Enter the number:");
    scanf("%d", &num);

    temp1 = num;
    temp2 = num;

    //NO. OF DIGITS
    while(num != 0){
        digit = num % 10;
        count++;
        num = num/10;
    }

    //SUM OF POWER OF DIGITS
    while(temp1 != 0){
        rem = temp1 % 10;
        sum = sum + pow(rem , count);
        temp1 = temp1/10;
    }

    if(sum == temp2){
        printf("%d is an armstrong number", temp2);
    }
    else{
        printf("%d is not an armstrong number", temp2);
    }

    return 0;
    
}