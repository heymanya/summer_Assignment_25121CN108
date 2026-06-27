//WAP TO COUNT EVEN AND ODD ELEMENTS.

#include<stdio.h>

int main(){
    int n, arr[100], odd =0 , even =0; 

    printf("Enter the size of the array :");
    scanf("%d", &n);

    printf("Elements of array:");
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0 ; i<n ; i++){
        if(arr[i] % 2 == 0){
            even++ ;
        }
        else{
            odd++ ;
        }
    }

    printf("Even elements : %d" , even);
    printf("Odd elements : %d" , odd);

    return 0;
}