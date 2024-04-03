#include <stdio.h>
#include <math.h>

int main()
{
   int pin = 1431, choice, option, agentCode, paybill, accountNumber, account, cardNo;
   float balance = 10000.70, amount, Balance;

   cardNo=1234;
   agentCode=19052;
   amount=300000.00;

   char* hashtag="*522#";
   printf("Please Send Your instructions\n1. Balance Enquiry\n2. Withdraw cash\n3. Deposit Money\n4. Exit");
   scanf("%d", &choice);
   switch(choice)
   {
      case 1:
            printf("Balance Enquiry Option-Select Option\n1. KCB Account\n2. KCB Card\n3. Vooma Wallet\n0. Go to Main Menu");
            scanf("%d",&option);
            switch(option)
            {
	            case 1: 
                     printf("Selected Account-1. /131***4590(KCB Bank Kenya Ltd)\n Enter your pin\n");
                     scanf("%d", &pin);
                     if (pin==1431)
                     {
                        printf("Your request is being processed. Please wait.\nYour current balance in your account=%.2f Ksh.",balance);
                     }
                     else if(pin!=1431)
                     {
                     printf("Your request is being processed. Please wait.\nInvalid Pin.Please try again later.");
                     }
               break;
               case 2:
                     printf("Select Card Number");
                     scanf("%d", &cardNo);
                     if(cardNo==1234)
                     {
                     printf("Enter your pin");
                     scanf("%d", &pin);
                     if(pin==1431)
                     {
                        printf("Your request is being processed. Please wait.\nYour current balance=%.2f Ksh.",balance);
                     }
                     else if(pin!=1431)
                     {
                        printf("Your request is being processed. Please wait.\nInvalid Pin. Please try again later.");
                     }
                     }
                     else if(cardNo!=1234)
                     {
                        printf("Incorrect Card Number. Please try again later");
                     }
                break;
                default : printf("Invalid Option \n");
                break;
        break;
    }