//WAP TO CREATE ATM SIMULATION.

#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000.0, deposit, withdraw;

    do
    {
        printf("\nA T M     S I M U L A T I O N -----> \n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice(1/2/3/4): ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);
                balance = balance + deposit;
                printf("Deposit Successful!\n");
                printf("Updated Balance: %.2f\n", balance);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);

                if(withdraw <= balance)
                {
                    balance = balance - withdraw;
                    printf("Withdrawal Successful!\n");
                    printf("Remaining Balance: %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM!\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}