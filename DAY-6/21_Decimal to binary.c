//WAP TO CONVERT DECIMAL TO BINARY.

#include<stdio.h>
int main(){
    int decimal, binary[100] ;

    printf("Enter the decimal number:");
    scanf("%d", &decimal);

    if(decimal == 0 ){
        printf("Binary = 0");
        return 0;
    }

    int i =0;
    while(decimal > 0){
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    // PRINT ALL STORED REMAINDERS IN REVERSE ORDER TO GET THE BINARY NUMBER.
    printf("Binary = ");

    for(int j = i -1 ; j>=0 ; j-- ){
        printf("%d", binary[j]);
    }

    return 0;
}