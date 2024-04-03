# include <stdio.h>

int main()
{
   int pin,choice,option,agentCode,paybill,account,cardNo,phone;
   float balance,amount,voomaBalance,cardBalance; 
   balance=22500.70;
   pin=2022;
   cardBalance=7370.67;
   voomaBalance=9270.87;
   cardNo=19052;
   
   printf("Please Send Your instructions\nSelect Option\n1.Balance Enquiry\n2.Withdraw Cash\n3.Deposit Cash\n4.Exit\n");
   scanf("%d", &choice);
   switch(choice)
   {
      case 1:
            printf("Balance Enquiry Option-Select Option\n1. KCB Account\n2. KCB Card\n3. Vooma Wallet\n0. Go to Main Menu\n");
            scanf("%d",&option);
            switch(option)
            {  
	            case 1: 
                     printf("Selected Account-1. /131***4590(KCB Bank Kenya Ltd)\n Enter your pin\n");
                     scanf("%d", &pin);
                     if (pin==2022)
                     {
                        printf("Your request is being processed...Please wait.\nYour current balance in your account=%.2f Ksh.",balance);
                     }
                     else
                     {
                     printf("Your request is being proccessed...Please wait.\nInvalid Pin.Please try again later.");
                     }
               break;
               case 2:
                     printf("Fill your KCB Card Number\n");
                     scanf("%d", &cardNo);
                     printf("Enter your pin\n");
                     scanf("%d", &pin);
                     if(pin==1431)
                     {
                        printf("Your request is being processed. PLease wait.\nYour current  Card balance=%.2f Ksh.",cardBalance);
                     }
                     else
                     {
                        printf("Your request is being processed. Please wait.\nInvalid Pin. Please try again later.");
                     }
               break;
               case 3:
                     printf("Vooma Wallet Option.\nEnter your pin\n");
                     scanf("%d", &pin);
                     if(pin==2022)
                     {
                        printf("Your request is being processed...PLease wait.\nYour current Vooma balance=%.2f Ksh.",voomaBalance);
                     }
                     else
                     {  
                        printf("Your request is being processed. Please wait.\nInvalid Pin. Please try again later.");
                     }
               break;
               case 0:
                     break;
               default: 
                        printf("Invalid option \n");
               break;
            }
      break;
            
      case 2:
            printf("Withdraw Cash From:\n1. KCB/Vooma Agent\n2. KCB Branch / ATM / Agent by Token\n0.Go to Main Menu\n");
            scanf("%d",&option);
            switch(option)
            {  
            case 1:
                  printf("Select Source-Vooma Wallet\nEnter Vooma Agent Code\n");
                  scanf("%d", &agentCode);
                  printf("Enter amount you want to withdraw from your Vooma Wallet\n");
                  scanf("%f", &amount);
                  printf("Enter Pin\n");
                  scanf("%d", &pin);
                  if(pin==2022 && amount<=voomaBalance)
                  {
                     printf("Your request is being processed...Please wait\nConfirmed, you have successfully withdraw ksh.%.2f",amount);
                  }
                  else if(pin!=2022)
                  {  
                     printf("Your request is being processed. Please wait.\nInvalid Pin. Please try again later.");
                  }
                  else if(amount>voomaBalance)
                  {
                     printf("Insufficient balance in to your vooma account");
                  }
                  break;
                  case 2:
                        printf("Selected Source-KCB Account\nEnter amount you want to withdraw\n");
                        scanf("%f", &amount);
                        printf("Enter pin\n");
                        scanf("%d",&pin);
                        if(pin==2022 || amount<=balance)
                        {
                           printf("Your request is being processed. PLease wait.\nConfirmed, you have successfully withdraw ksh.%.2f",amount);
                        }
                        else if(pin!=2022)
                        {  
                           printf("Your request is being processed. Please wait...\nInvalid Pin. Please try again later.");
                        }
                        else if(amount>balance)
                        {
                           printf("Insufficient balance in your KCB Account");
                        }
                  break;
                  case 0:
                  break;
                  default:
                           printf("Invalid Input.Try again later\n");
                  break;
            }
      break;
      case 3:
      printf("Choose where to deposit funds :\n1.To Mpesa\n2.To Account\n");
      scanf("%d", &option);
      switch(option)
      {
         case 1:
         printf("\nDeposit Money to Mpesa");
         printf("Enter Paybill Number\n");
         scanf("%d", &paybill);
         printf("Enter Phone Number\n");
         scanf("%d", &phone);
         printf("Enter Pin\n");
         scanf("%d", &pin);
         if(pin==2022)
         {
            printf("Your request is being processed. Please wait...\nConfirmed, you have received ksh.%.2f", amount);
            printf("In your account. Your current balance is Ksh.%.2f",balance);
         }
         else
         {
            printf("Incorrect pin...Try again later");
         }
         break;

         case 2:
         printf("Enter Paybill number\n");
         scanf("%d", &paybill);
         printf("Enter Account Number\n");
         scanf("%d",&account);
         printf("Enter Amount\n");
         scanf("%f", &amount);
         printf("Enter the pin\n");
         scanf("%d",&pin);
         if(pin==2022)
         {
            printf("Your request is being processed. Please wait...\nConfirmed, Ksh.%.2f",amount);
            printf("has successfully been deposited in account %d.\n",account); 
         }
         else if(pin!=2022)
         {
            printf("Invalid pin...Please try again!");
         }
         else if(amount>300000)
         {
            printf("Terms and conditions apply...You are limited to deposit above Ksh.300000");
         }
         break;
         default:  
         printf("Invalid Option...Please Try Again Later");      
         break;     
      }
   case 4:
   break;
   default:
   printf("Invalid option...Please try again later!");
   break;
   }
   return 0;
}
   

