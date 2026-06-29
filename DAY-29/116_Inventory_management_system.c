//WAP TO CREATE AN INVENTORY MANAGEMENT SYSTEM.

#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int quantity;
    float price;
};

int main() {
    struct Item item[100];
    int n = 0, choice, i, searchId, found;

    do {
        printf("\nI N V E N T O R Y   M A N A G E M E N T   S Y S T E M  -------> \n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter Item ID: ");
            scanf("%d", &item[n].id);

            printf("Enter Item Name: ");
            scanf("%s", item[n].name);

            printf("Enter Quantity: ");
            scanf("%d", &item[n].quantity);

            printf("Enter Price: ");
            scanf("%f", &item[n].price);

            n++;
            printf("Item Added Successfully!\n");
            break;

        case 2:
            if(n == 0) {
                printf("Inventory is Empty!\n");
            } else {
                printf("\nID\tName\tQuantity\tPrice\n");
                printf("-----------------------------------------\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t\t%.2f\n",
                           item[i].id,
                           item[i].name,
                           item[i].quantity,
                           item[i].price);
                }
            }
            break;

        case 3:
            found = 0;

            printf("Enter Item ID to Search: ");
            scanf("%d", &searchId);

            for(i = 0; i < n; i++) {
                if(item[i].id == searchId) {
                    printf("\nItem Found!\n");
                    printf("ID : %d\n", item[i].id);
                    printf("Name : %s\n", item[i].name);
                    printf("Quantity : %d\n", item[i].quantity);
                    printf("Price : %.2f\n", item[i].price);
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Item Not Found!\n");

            break;

        case 4:
            found = 0;

            printf("Enter Item ID: ");
            scanf("%d", &searchId);

            for(i = 0; i < n; i++) {
                if(item[i].id == searchId) {
                    printf("Enter New Quantity: ");
                    scanf("%d", &item[i].quantity);

                    printf("Quantity Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Item Not Found!\n");

            break;

        case 5:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}