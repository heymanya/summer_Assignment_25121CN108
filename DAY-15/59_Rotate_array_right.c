//WAP TO ROTATE ARRAY RIGHT.

#include <stdio.h>

int main() {
    int arr[100], n, i, last;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store the last element
    last = arr[n - 1];

    // Shift elements one position to the right
    for(i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place the last element at the first position
    arr[0] = last;

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}