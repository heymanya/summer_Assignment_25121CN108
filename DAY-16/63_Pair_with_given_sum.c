//WAP TO FIND PAIR WITH GIVEN SUM.

//(The program checks all possible pairs in the array to find which two numbers add up to the target sum.)

#include<stdio.h>
int main(){
    int n, target_sum;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array:");
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum:");
    scanf("%d", &target_sum);

    printf("Pairs with sum %d :", target_sum);

    for(int i=0 ; i< n; i++){
        for(int j= i+1; j<n ;j++){
            if(arr[i] + arr[j] == target_sum){
                printf("The pair is:(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}