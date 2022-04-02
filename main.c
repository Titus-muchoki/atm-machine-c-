#include <stdio.h>
#include<stdbool.h>  

int main()
{   
    int totalBalance = 0;
    int next;
    bool cont = false;

    printf("Welcome! Would you like to continue? \n 1. Yes \n 2. No");
    printf("\n");
    scanf("%d", &next);
    if(next == 1) {
        cont = true;
    } else if(next == 2) {
        cont = false;
    } else {
        printf("Wrong input! Kindly try again");
    }

    while (cont==true)
    {
        int option;
        printf("Kindly choose a transaction option of your choice. \n 1. Check balance \n 2. Deposit \n 3. Withdraw \n 4. Exit");
        printf("\n");
        scanf("%d", &option);    

        switch (option)
        {
        case 1:
            printf("Your total balance is %d", totalBalance);
            printf("\n");
            break;
        case 2:
            printf("How much money would you like to deposit?");
            printf("\n");
            int deposit = 0;
            scanf("%d", &deposit);
            totalBalance = totalBalance + deposit;
            printf("You have successfully made a deposit of Ksh %d", deposit);
            printf("\n");
            printf("Your account balance is now Ksh %d", totalBalance);
            printf("\n");
            break;
        case 3: 
            int withdraw;
            printf("How much money would you like to withdraw");
            printf("\n");
            scanf("%d", &withdraw);
            if(totalBalance <= withdraw) {
                printf("Sorry, you have insufficient funds in your account");
            } else {
                int balance = totalBalance - withdraw;
                printf("Your withdrawal of amount Ksh %d", withdraw, " has been made made successfully.");
                printf("\n");
                printf("Your current balance is Ksh %d", balance);
            }
            printf("\n");
            break;
        case 4: 
            printf("Have a nice day! Goodbye");
            cont = false;
        default:
            break;
        }    
    }
}
