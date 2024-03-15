# include <stdio.h>
# include <stdio.h>
# include <stdlib.h>

int main()
{ 
    char* stri="*334#";
    int choice;
    scanf("%c", &stri);

    
    printf(" Send Instructions.\n");
    printf("Buy Airtime @ksh.20\n");
    printf("Send Money\n");
    printf("Make Payments\n");
    printf("Withdraw Money\n");
    printf("Bank services\n");
    printf("My account\n");
    
    scanf("%d", &choice);
    if(choice>=1 && choice<=4) 
        switch (choice)
    {
        case 1:
               printf("My Phone\nOther Phone \n");
               int amount;
               printf("Enter amount.\n");
               scanf("%d",&amount);
               if(amount>=20)
               printf("Transaction successful!\nYour balance has been deducted by Shs.%d from your Mpesa account.",amount);
               else(amount<20);
               printf("Insufficient balance in your Mpesa account.Please try again later.");
        break;  
        case 2:
               printf("Please enter phone number\n");
               int contact;
               scanf("%d", &contact);
	           printf("Please wait...\n");
               int Amount;
               printf("Please enter Amount");
               scanf("%d", &Amount);
               if(Amount>=20)
               { 
               printf("Transaction successful!\nYour balance has been deducted by sh.%d from your account", amount);
               }
               else(Amount<20);
               { 
               printf("Insufficient account in your Mpesa account. Please try again later.");
                   
               }
        default:
              printf("Invalid Choice! Please Try Again.\n");          
	    break;    
    }
    else(choice);
    {
        printf("Invalid Choice.");
    }
    return 0;
}