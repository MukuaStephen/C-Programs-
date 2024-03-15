# include <stdio.h>
# include <stdio.h>
# include <math.h>

int main()
{
   char* string="*522#";
   scanf("%c",&string);
   printf("                                      Send Instructions\n                           ");
   printf("Select option");
   printf("1 Balance enquiries\n");
   printf("2 Payments\n");
   printf("3 Send Money\n");
   printf("4 Withdraw cash\n");
   printf("5 Loans & Savings\n");
   printf("6 Request a Till\n");
   printf("7 Card  Services\n");
   printf("8 My Account\n");
   int choice;
   scanf("%d", &choice);
   if(choice>=1 && choice<=9)
   switch(choice)
   {
    case 1:
    printf("Balance Enquiry -Select option \n");
    printf("1 KCB Account\n");
    printf("2 KCB Card\n");
    printf("3 Vooma Wallet\n");
    printf("0 Go to Main Menu");
    break;
    case 2:
    printf("Payment Option- Select option \n");
    printf("1 Buy Airtime\n");
    printf("2 Pay Bills\n");
    printf("3 Buy Goods\n");
    printf("Lipa Karo\n");
    printf("KCB Insurance\n");
    printf("0 Go to Main Menu");
    break;
    case 3:
    printf("Send Money");
    printf("1 Send to Vooma\n");
    printf("2 Bank Transfers\n");
    printf("3 Send to M-Pesa\n");
    printf("4 Send to T-KASH\n");
    printf("5 Send to Airtel\n");
    printf("6 My Cards\n");
    printf("7 PesaLink\n");
    printf("0 Go to Main Menu"); 
    break;
    case 4:
    printf("Withdraw Cash From:\n");
    printf("1 KCB/Vooma Agent\n");
    printf("KCB Branch/ ATM/ Agent by Token\n");
    printf("0 Go Back To Main Menu");
    break;
    case 5:
    printf("Loans and Savings\n");
    printf("1 KCB Mobile Loan");
    printf("2 Vooma Loans & Savings\n");
    printf("3 Salary Advance\n");
    printf("4 Goal Savings\n");
    printf("KCB Personal Checkoff Loans\n");
    printf("6 Loans Status Check\n");
    printf("0 Return to Main Menu");
    break;
    case 6:
    printf("Select\n");
    printf("1 Vooma Merchant\n");
    printf("2 Vooma Agent"); 
    break;
    case 7:
    printf("Card Services\n");
    printf("1 Card Balance\n");
    printf("2 Load Card Fro, Bank Account\n");
    printf("3 Pay KCB Card from VOOMA Wallet\n");
    printf("4 Stop Card\n");
    printf("0 Go to Main Menu");
    break;
    case 8:
    printf("My Account\n");
    printf("1 Mini Statements\n");
    printf("2 Simba Points\n");
    printf("3 Benefiticiary Management\n");
    printf("4 Manage Account\n");
    printf("5 Activate iPhone App\n");
    printf("6 Invite a Friend\n");
    printf("7 Just For You\n"); 
    break;
    default:
    printf("Out of  Range. Please enter again.\n");
   }
        else
        printf("INVALID OPTION/n");
        return 0;
   }
    
