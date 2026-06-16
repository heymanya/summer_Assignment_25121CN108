//WAP TO FIND MISSING NUMBER IN ARRAY.

#include<stdio.h>
int main(){
    int n, i,j, expected_sum, missing , sum=0;

    printf("Enter the value of n:");
    scanf("%d", &n);
    
    j = n-1;

    int arr[j];

    printf("Enter %d elements:\n", j);

    for(i=0 ; i< j ; i++){
        scanf("%d" , &arr[i]);
        sum = sum + arr[i]; 
    }

    expected_sum = n*(n+1)/ 2;

    missing = expected_sum - sum;

    printf(" Missing number: %d", missing);

    return 0;
}