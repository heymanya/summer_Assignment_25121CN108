//WAP TO FIND SUM AND AVERAGE OF ARRAY.

#include<stdio.h>

int main(){
    int n , arr[100] , sum = 0 ;
    float avg;

    printf("Enter the size of array :");
    scanf("%d" , &n);

    printf("Elements of array :");
    for(int i=0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
        sum = sum + arr[i];
    }

    avg = (float)sum / n;
 
    printf("Sum of array :%d\n", sum);
    printf("Average of array :%.2f\n", avg);

    return 0;
}