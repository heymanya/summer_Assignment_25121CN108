//WAP TO CREATE MENU-DRIVEN ARRAY OPERATIONS SYSTEM.

#include <stdio.h>

int main() {
    int arr[100], n, i, choice;
    int sum = 0, largest, smallest, search, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nM E N U  ---->\n");
        printf("1. Display Array\n");
        printf("2. Find Sum of Elements\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Smallest Element\n");
        printf("5. Search an Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
                largest = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > largest)
                        largest = arr[i];
                }
                printf("Largest Element = %d\n", largest);
                break;

            case 4:
                smallest = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] < smallest)
                        smallest = arr[i];
                }
                printf("Smallest Element = %d\n", smallest);
                break;

            case 5:
                found = 0;
                printf("Enter element to search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++) {
                    if(arr[i] == search) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Element not found.\n");
                break;

            case 6:
                printf("Exit Program...\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}