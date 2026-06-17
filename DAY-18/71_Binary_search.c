//WAP TO BINARY SEARCH.

#include<stdio.h>
int main(){
    int n, low , high , mid , target;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Elements of SORTED array are:");

    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    printf("Target is:");
    scanf("%d", &target);

    low = 0;
    high = n-1;

    while(low <= high){
        mid = (low + high)/ 2;

        if(arr[mid] == target){
            printf("Element %d is found at: %d",target, mid);
            return 0;
        }
        else if(target < arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }

    printf("Target not found.");

    return 0;
}