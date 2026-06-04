//WAP TO PRINT ARMSTRONG NUMBERS IN A RANGE.

#include<stdio.h>
#include<math.h>

int main(){
    int a , b, num , temp, count= 0 , digit , sum;

    printf("Enter the range:");
    scanf("%d %d", &a , &b);

    for(num = a ; num<= b ; num++){
        temp = num; //COPY OF THE NUMBER 
        count = 0;

        //COUNTING DIGITS
        while(temp != 0){
            count ++;
            temp = temp/10;
        }

        temp = num;
        sum = 0;

        //SUM OF POWER OF DIGITS
        while(temp != 0){
            digit = temp % 10;
            sum = sum + pow(digit , count);
            temp = temp/10;
        }

        //CONDITION
        if(sum == num){
            printf("%d\t", num);
        }
    }

    return 0;
}    