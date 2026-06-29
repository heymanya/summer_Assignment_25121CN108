//WAP TO LINEAR SEARCH.

#include <stdio.h>

int main()
{
    int arr[100], n, i, key, found = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    // Display result
    if(found == 1)
        printf("Element %d found at position %d.\n", key, i + 1);
    else
        printf("Element %d not found.\n", key);

    return 0;
}