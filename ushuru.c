# include <stdio.h>
# include <stdio.h>

int main()
{
    int gross;
    float tax, net;
    
    printf("Enter the Gross Salary\n");
    scanf("%d", &gross);
    
    if(gross >=100000) 
    {
        tax =0.3*gross;
        net=gross-tax;
        printf("Tax=%.2f\n", tax);
        printf("Net salary=%.2f",net);
    } 
    else if(gross >=60000 && gross <100000)
    {
        tax =0.2*gross;
        net=gross-tax;
        printf("Tax=%.2f\n", tax);
        printf("Net salary=%.2f\n", net);
    }
     else if(gross>=30000 && gross <60000 )
      {
        tax =0.1*gross;
        net=gross-tax;
        printf("Tax=%.2f\n", tax);
        printf("Net salary=%.2f", net);
    }
    else if(gross>=18000 && gross<30000)
    {
        tax =0.05*gross;
        net=gross-tax;
        printf("Tax=%.2f\n", tax);
        printf("Net salary=%.2f", net);
    }
    else if(gross>0 && gross<18000)
    {
        printf("YOU ARE EXEMPTED FROM BEING TAXED");
    }
    else if(gross<0)
    {
        printf("INVALID GROSS INCOME INPUT");
    }
    return 0; 
}