//WAP TO CREATE CONTACT MANAGEMENT SYSTEM.

// WAP TO CREATE CONTACT MANAGEMENT SYSTEM.

#include <stdio.h>

struct Contact {
    char name[100];
    char phone[15];
    char email[100];
};

int main() {
    struct Contact c = {0};
    int choice;

    do {
        printf("\nC O N T A C T      M A N A G E M E N T      S Y S T E M  ----->\n");
        printf("1. Add Contact\n");
        printf("2. View Contact\n");
        printf("3. Delete Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Name: ");
            scanf(" %[^\n]", c.name);

            printf("Enter Phone Number: ");
            scanf("%s", c.phone);

            printf("Enter Email: ");
            scanf("%s", c.email);

            printf("Contact Added Successfully!\n");
            break;

        case 2:
            if (c.name[0] == '\0') {
                printf("No contact available.\n");
            } else {
                printf("\nC O N T A C T    D E T A I L S  ------->\n");
                printf("Name  : %s\n", c.name);
                printf("Phone : %s\n", c.phone);
                printf("Email : %s\n", c.email);
            }
            break;

        case 3:
            if (c.name[0] == '\0') {
                printf("No contact to delete.\n");
            } else {
                c.name[0] = '\0';
                c.phone[0] = '\0';
                c.email[0] = '\0';
                printf("Contact Deleted Successfully!\n");
            }
            break;

        case 4:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}