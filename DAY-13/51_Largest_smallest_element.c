//WAP TO FIND LARGEST AND SMALLEST ELEMENT. 

#include<stdio.h>

int main(){
    int n, arr[100], smallest, largest;

    printf("Enter the size of array :");
    scanf("%d" , &n);

    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is both largest and smallest element.
    largest = arr[0];
    smallest = arr[0];

    for (int i = 1; i < n; i++) {   //FIND LARGEST
        if (arr[i] > largest){
            largest = arr[i];
        }
        if (arr[i] < smallest){      //FIND SMALLEST
            smallest = arr[i];
        }    
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}