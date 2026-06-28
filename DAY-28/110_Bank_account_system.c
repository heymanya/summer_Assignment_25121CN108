//WAP TO CREATE BANK ACCOUNT SYSTEM.

#include<stdio.h>

struct bank{
    int accNo ;
    char name[100];
    float balance ;
};

int main(){
    struct bank b;

    int choice;
    float amount;

    printf("Create bank account :");

    printf("Enter account number :");
    scanf("%d", &b.accNo);

    printf("Enter account holder Name :");
    scanf(" %[^\n]", b.name);

    printf("Enter initial Balance :");
    scanf("%f", &b.balance);

    do{
        printf("\n B A N K    A C C O U N T    S Y S T E M  ------> \n");
        printf("1. Deposit \n");
        printf("2. Withdraw \n");
        printf("3. Check Balance \n");
        printf("4. Exit \n");

        printf("Enter choice :");
        scanf("%d" , &choice);

        switch (choice){

            case 1: 
            printf("Enter amount to Deposit :");
            scanf("%f" , &amount);

            b.balance += amount;

            printf("Deposit Successful !\n");
            break;

            case 2:
            printf("Enter amount to Withdraw :");
            scanf("%f" , &amount);

            if(amount <= b.balance ){
                b.balance -= amount;
                printf("Withdrawal Successful !\n");
            }
            else{
                printf("Insufficient Balance !\n");
            }
            break;
            
            case 3:
            printf("\nAccount Number : %d\n", b.accNo);
            printf("Account Holder : %s\n", b.name);
            printf("Current Balance: %.2f\n", b.balance);
            break;

            case 4:
            printf("Thank You for banking with us !\n");
            break;

            default :
            printf("Invalid Choice !\n");
        }
    }
    while(choice != 4);

    return 0;
}