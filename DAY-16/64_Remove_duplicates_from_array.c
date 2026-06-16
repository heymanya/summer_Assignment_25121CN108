//WAP TO REMOVE DUPLICATES FROM ARRAY.

#include<stdio.h>
int main(){
    int n, i, j;

    printf("Enter the size of array:");
    scanf("%d" ,&n);

    int arr[n];

    printf("Elements of array:\n");
    for(i=0 ; i< n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array after removing duplicates:\n");

    for(i=0 ; i<n ; i++){
        int isduplicate = 0;

        for(j= 0; j<i ;j++){
            if(arr[i] == arr[j]){
                isduplicate =1;
                break;
            }
        }
        if(isduplicate == 0){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}