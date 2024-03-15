# include <stdio.h>
# include <stdio.h>
# include <math.h.>
const float pi=3.1415926;
float volume(float side);
{ 
return(pi*side*side*side);
}
int main()
{
    float side;
    float volume;
    printf("Enter the length of a side\n");
    scanf("%f",&side);
    volume=volume(side);
    printf("\nThe volume of the cube =%.2f",volume);
    return 0;

}