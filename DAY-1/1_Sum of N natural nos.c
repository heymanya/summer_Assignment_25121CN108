//WAP TO CALCULATE SUM OF FIRST N NATURAL NUMBERS.

#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter the value of n:");
    scanf("%d", &n);

    for(int i=1 ; i<=n ; i++){
        sum+= i;
    }
    printf("Sum of first N natural nos. = %d", sum);
    
    return 0;
}