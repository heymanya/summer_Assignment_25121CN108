//WAP TO INPUT AND DISPLAY ARRAY.

#include<stdio.h>

int main(){
    int n , arr[100];

    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the elements of the array:");
    for(int i=0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }

    printf("Array elements are :");
    for(int i=0 ; i<n ; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}