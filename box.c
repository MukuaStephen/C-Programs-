# include <stdio.h>
# include <math.h.>
const float pi=3.1415926;
int main()
{
    float side;
    float volume;
    printf("Enter the length of a side\n");
    scanf("%f",&side);
    volume=pi*pow(side,2)*side/6;
    printf("\nThe volume of the cube =%.2f",volume);
    return 0;

}