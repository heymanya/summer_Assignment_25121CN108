//WAP TO FIND FREQUENCY OF AN ELEMENT.

#include <stdio.h>

int main()
{
    int arr[100], n, i, key, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its frequency: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    if(count > 0)
        printf("Frequency of %d = %d\n", key, count);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}