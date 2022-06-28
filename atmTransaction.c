#include <stdio.h>
#include "userDetail.h"

int choice, pin, ch;
char transaction = 'y';    
unsigned long withdraw, deposit;

int main(){

    setDetail(); // To Set detail of user

    printf("This program is develop by pkinux\n\n");
  

    while ((pin != User1.User_PIN) && (pin != User2.User_PIN))
    {
        printf("PLEASE, ENTER YOUR SECRET PIN: ");
        scanf("%d", &pin);
        if((pin != User1.User_PIN) && (pin != User2.User_PIN)){
            printf("PLEASE ENTER VALID PIN \n");
        }
    }

    do{
        // interface of program
        printf("##### WELCOM TO BANK ATM MACHINE #####\n");
        printf("# PLEASE SELECT CHOICE YOU WANT TO DO\n");
        printf("# 1. Check Balance \n");
        printf("# 2. Withdraw \n");
        printf("# 3. Deposit \n");
        printf("# 4. Exit \n");
        printf("################################ \n");
        printf("# ENTER YOUR CHOICE : ");
        scanf("%d", &choice);
        //end Interface of Program

        // to do condition
        if(pin == User1.User_PIN)
        {
           switch (choice)
           {
            case 1:
                printf("YOU CURRENT BALANCE IS %lu Bath\n",User1.Amount);
                break;
            case 2:
                printf("ENTER AMOUNT TO WITHDRAW : ");
                scanf("%lu", &withdraw);
                if(withdraw % 100 != 0){
                    printf("\nPLEASE ENTER AMOUNT FOR 100,200,500,1000 .. :\n");
                }
                else if(withdraw > User1.Amount){
                    printf(" INSUFFICENT BALANCE \n");
                }
                else{
                    User1.Amount = User1.Amount - withdraw;
                    printf("\n\n*** Pleae Collect the cash! *** \n\n");
                    printf("Your current balance is %lu Bath", User1.Amount);
                }
                break;
            case 3:
                printf("ENTER AMOUNT TO DEPOSIT : ");
                scanf("%lu", &deposit);
                User1.Amount = User1.Amount + deposit;
                printf("\nYOUR CURRENT BALANCE IS %lu Bath\n",User1.Amount);
                break;
            case 4:
                printf("THANK YOU FOR USING OUR BANK :) \n");
                break;
           
           default:
                printf("INVALID CHOICE");
                break;
           }
        }
        else if(pin == User2.User_PIN)
        {
           switch (choice)
           {
            case 1:
                printf("YOU CURRENT BALANCE IS %lu Bath\n",User2.Amount);
                break;
            case 2:
                printf("ENTER AMOUNT TO WITHDRAW : ");
                scanf("%lu", &withdraw);
                if(withdraw % 100 != 0){
                    printf("\nPLEASE ENTER AMOUNT FOR 100,200,500,1000 .. :\n");
                }
                else if(withdraw > User2.Amount){
                    printf(" INSUFFICENT BALANCE \n");
                }
                else{
                    User2.Amount = User2.Amount - withdraw;
                    printf("\n\n*** Pleae Collect the cash! *** \n\n");
                    printf("Your current balance is %lu Bath", User2.Amount);
                }
                break;
            case 3:
                printf("ENTER AMOUNT TO DEPOSIT : ");
                scanf("%lu", &deposit);
                User2.Amount = User2.Amount + deposit;
                printf("\nYOUR CURRENT BALANCE IS %lu Bath\n",User2.Amount);
                break;
            case 4:
                printf("THANK YOU FOR USING OUR BANK :) \n");
                break;
           
           default:
                printf("INVALID CHOICE");
                break;
           }
        }
        
        printf("\n\n\n DO YOU WANT ANOTHER SERVICES? Y/N : ");
        fflush(stdin);
        scanf("%c",&transaction);
        if(transaction == 'n' || transaction == 'N'){
            ch = 1;
        }

    }while (!ch);
        
    printf("\n *** THANK YOU FOR USE OUR BANK *** \n");
    
    


    // to schow detail of user
    /*
    printf("Detail of User1 is \n");
    printf("ID = %d\n",User1.User_ID);
    printf("PIN = %d\n",User1.User_PIN);
    printf("Amount = %lu\n",User1.Amount);

    printf("Detail of User1 is \n");
    printf("ID = %d\n",User2.User_ID);
    printf("PIN = %d\n",User2.User_PIN);
    printf("Amount = %lu\n",User2.Amount);*/
}