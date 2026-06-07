//WAP TO CONVERT BINARY TO DECIMAL.

#include<stdio.h>
int main(){
    int decimal =0 , binary , base=1 , remainder;

    printf("Enter the binary number:");
    scanf("%d" , &binary);

    while(binary != 0){
        remainder = binary % 10; //LAST DIGIT
        decimal = decimal + (remainder * base);
        base = base * 2;
        binary = binary / 10; //REMOVE LAST DIGIT
    }
    printf("Decimal = %d", decimal);

    return 0;
}