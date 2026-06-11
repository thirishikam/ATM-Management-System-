#include <stdio.h>

int main()
{
    int password;
    int choice;
    float balance = 20000, amount;
    char receipt;

    printf("    WELCOME TO ATM     \n");

    while(1)
    {
        printf("Enter 4-digit Password: ");
        scanf("%d", &password);

        if(password >= 1000 && password <= 9999)
        {
            break;
        }
        else
        {
            printf("Incorrect password\n");
        }
    }

    while(1)
    {
        printf("\n   ATM MENU     \n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("3. Balance Enquiry\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount >= 500 && amount <= 10000)
                {
                    if(amount <= balance)
                    {
                        balance = balance - amount;

                        printf("Please collect your amount.\n");

                        printf("Receipt (Y/N): ");
                        scanf(" %c", &receipt);

                        if(receipt == 'Y' || receipt == 'y')
                        {
                            printf("\n    RECEIPT     \n");
                            printf("Withdrawn Amount : %.2f\n", amount);
                            printf("Available Balance : %.2f\n", balance);
                        }
                    }
                    else
                    {
                        printf("Insufficient Balance!\n");
                    }
                }
                else
                {
                    printf("Invalid Amount!\n");
                }

                break;

            case 2:

                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if(amount >= 500 && amount <= 10000)
                {
                    balance = balance + amount;

                    printf("Deposited Successfully.\n");

                    printf("Receipt (Y/N): ");
                    scanf(" %c", &receipt);

                    if(receipt == 'Y' || receipt == 'y')
                    {
                        printf("\n    RECEIPT    \n");
                        printf("Deposited Amount : %.2f\n", amount);
                        printf("Available Balance : %.2f\n", balance);
                    }
                }
                else
                {
                    printf("Invalid Amount!\n");
                }

                break;

            case 3:

                printf("Available Balance : %.2f\n", balance);

                printf("Receipt (Y/N): ");
                scanf(" %c", &receipt);

                if(receipt == 'Y' || receipt == 'y')
                {
                    printf("\n    RECEIPT   \n");
                    printf("Available Balance : %.2f\n", balance);
                }

                break;

            case 4:

                printf("Thank You For Using ATM.\n");
                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
