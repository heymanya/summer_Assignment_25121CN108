//WAP TO BUBBLE SORT.

//(Compares adjacent elements and swaps them if they are in the wrong order.)

#include<stdio.h>
int main(){
    int n ;
    int i, j, temp;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("The elements of the array are:");
    
    for(i=0 ; i< n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0 ; i<n-1; i++){
        for(j=0 ; j< n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i=0 ; i<n ; i++){
        printf("%d", arr[i]);
    }

    return 0;
}