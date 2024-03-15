# include <stdio.h>
# include <stdio.h>

int main()
{
    int choice;
    printf("Enter your choice\n");
    scanf("%d", &choice);
    if(choice>=1 && choice<=8)
    switch(choice) {
        case 1:
            printf("Send Money.\n");break;
        case 2:
            printf("Withdraw Cash.\n");break;
        case 3:
            printf("Buy Airtime.\n");break;
        case 4:
            printf("Loans and Savings.\n");break;
        case 5:
            printf("Lipa na M-Pesa.\n");break;
        case 6:
            printf("My Account.\n");break;
        default:
            printf("You didn't choose an option from the menu.\n");
    }
     else
     printf("Invalid Option\n");
   return 0;
}