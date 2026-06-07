//WAP TO COUNT SET BITS IN A NUMBER.

// [A set bit means a bit with value 1 in the binary representation of a number.]

#include<stdio.h>
int main(){
    int num , count =0;

    printf("Enter the number:");
    scanf("%d", &num);

    while(num != 0){
        if(num % 2 == 1){
            count++;
        }

        num = num/2;
    }

    printf("Set bits in a number = %d", count);

    return 0;
}