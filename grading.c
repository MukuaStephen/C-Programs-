# include <stdio.h>
# include <stdio.h>

int main()
{
    int marks;
    printf("Enter your Marks\n");
    scanf("%d",&marks);
    if(marks>=70)
    {
        printf("Grade=A");
    }
    else if(marks >= 60 && marks<70)

    {
        printf("Grade=B");
    }
    else if(marks >=50 && marks<60)
    {
        printf("Grade=C"); 
    }
    else if(marks >=40 && marks<50)
    {
        printf("Grade=D");
    }
    else if(marks>=0 && marks<40)
    {
        printf("Grade=FAIL");
    }
    else if(marks<0)
    {
        printf("INVALID MARKS");
    }
}