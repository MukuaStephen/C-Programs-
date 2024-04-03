# include <stdio.h>
# include <math.h>
int main()
{
   int pin,choice,option,agentCode,paybill,accountNumber,account,cardNo;
   cardNo=1234;
   agentCode=19052;
   float balance,amount,Balance; 
   Balance=balance+amount;
   balance=10000.70;
   paybill=572572;
   pin=1431;
   accountNumber=1317774590;
   amount=300000.00;
   char* hashtag="*522#";
   scanf("%c", &hashtag);
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
                     printf("Your request is being proccesses. Please wait.\nInvalid Pin.Please try again later.");
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
                        printf("Your request is being processed. PLease wait.\nYour current balance=%.2f Ksh.",balance);
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
               case 3:
                     printf("Vooma Wallet Option.\nEnter your pin");
                     scanf("%d", &pin);
                     if(pin==1431)
                     {
                        printf("Your request is being processed. PLease wait.\nYour current balance=%.2f Ksh.",balance);
                     }
                     else if(pin!=1431)
                     {  
                        printf("Your request is being processed. Please wait.\nInvalid Pin. Please try again later.");
                     }
               break;
               case 4:
                        return 0;
               default: 
                        printf("Invalid option \n");
               break;
         break;
         }
      case 2:
            printf("Withdraw Cash From:\n1. KCB/Vooma Agent\n2. KCB Branch / ATM / Agent by Token\n0.Go to Main Menu");
            switch(option)
            {  
            case 1:
                  printf("Select Source\n1. Vooma Wallet\n2. KCB Account\n0. Go to Main Menu");
                  switch(option)
                  case 1:
                        printf("Enter Vooma Agent Code");
                        scanf("%d", &agentCode);
                        if(agentCode==19052)
                        {
                           printf("Enter your pin");
                           scanf("%d", &pin);
                           if(pin==1431)
                           {
                              printf("Your request is being processed. PLease wait.\nYour current balance=%.2f Ksh.",balance);
                           }
                           else if(pin!=1431)
                           {  
                              printf("Your request is being processed. Please wait.\nInvalid Pin. Please try again later.");
                           }

                        }
                   break;
                  case 2:
                        printf("Enter pin");
                        scanf("%d",&pin);
                        if(pin==1431)
                        {
                           printf("Your request is being processed. PLease wait.\nYour current balance=%.2f Ksh.",balance);
                        }
                        else if(pin!=1431)
                        {  
                           printf("Your request is being processed. Please wait.\nInvalid Pin. Please try again later.");
                        }
                  break;
                  case 3:
                  return 0;
                  break;
                  default:
                           printf("Invalid Input.Try again later\n");
                  break;
            }
      break;
                  case 3:
                  printf("Select Account\n1. My account\n 2.Other Account");
                  switch(option)
                  {
                     case 1:
                     printf("Enter Paybill Number\n");
                     scanf("%d", &paybill);
                     if(paybill==572572)
                     { 
                        printf("Enter your Account Number");
                        scanf("%d", &accountNumber);
                     }
                     else if(paybill!=572572)
                     {
                        printf("Incorrect paybill");
                     }
                        if(accountNumber==1317774590)
                        {   
                         printf("Enter Pin");
                         scanf("%d", &pin);
                        }
                        else if(accountNumber!=1317774590)
                         {
                           printf("Account does not exist.\n");
                         }
                         if(pin==1431)
                         {
                           printf("Your request is being processed. Please wait...\nConfirmed, you have received ksh.%.2f", amount);
                           printf("In your account. Your current balance is Ksh.%.2f",balance+amount);
                        }
                        else if(pin!=1431)
                        {
                           printf("Incorrect pin...Try again later");
                        }
                     break;
                     case 2:
                     printf("Enter Account Number");
                     scanf("%d",&account);
                     printf("Enter Amount");
                     scanf("%d", &amount);
                     printf("Enter the pin");
                     scanf("%d",&pin);
                  if(pin==1431 && amount<=300000)
                  {
                     printf("Your request is being processed. Please wait...\nConfirmed, Ksh.%.2f",amount);
                     printf("has successfully been deposited in account",account); 
                  }
                  else if(pin!=1431)
                  {
                     printf("Invalid pin...Please try again");
                  }
                  else if(amount>300000)
                  {
                     printf("Terms and conditions apply...You are limited to deposit above Ksh.300000");
                  }
                  break;
                  default:
                  printf("Invalid option...Please try again later");
                  break;
                  }
         break;
         case 4:
         return 0;
         break;
         default:  
         printf("Invalid Option...Please Try Again Later");           
     }
}