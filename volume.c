# include <stdio.h>
# include <stdio.h>

int main()
{
    int radius, height;
    float volume;
    printf("Enter the value for radius and height respectively\n");
    scanf("%d/n", &radius);
    scanf("%d", &height);
    volume=3.142*radius*radius*height;
    printf("\nThe volume of cylinder=%.3f",volume);
    return 0;
}