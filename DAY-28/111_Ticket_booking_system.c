//WAP TO CREATE TICKET BOOKING SYSTEM.

#include<stdio.h>

struct Ticket{
    int ticketNo;
    char name[100];
    int seat;
    float price;
};

int main() {
    struct Ticket t = {0};
    int choice;

    do {
        printf("\nT I C K E T     B O O K I N G     S Y S T E M  -------> \n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Ticket Number: ");
            scanf("%d", &t.ticketNo);

            printf("Enter Passenger Name: ");
            scanf(" %[^\n]", t.name);

            printf("Enter Number of Seats: ");
            scanf("%d", &t.seat);

            t.price = t.seat * 250;   // ₹250 per seat

            printf("Ticket Booked Successfully!\n");
            break;

        case 2:
            if (t.ticketNo == 0) {
                printf("No ticket booked.\n");
            } else {
                printf("\nT I C K E T S    D E T A I L S  ------> \n");
                printf("Ticket Number : %d\n", t.ticketNo);
                printf("Passenger Name: %s\n", t.name);
                printf("Seats         : %d\n", t.seat);
                printf("Total Price   : %.2f\n", t.price);
            }
            break;

        case 3:
            if (t.ticketNo == 0) {
                printf("No ticket to cancel.\n");
            } else {
                t.ticketNo = 0;
                t.seat = 0;
                t.price = 0;
                printf("Ticket Cancelled Successfully!\n");
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
