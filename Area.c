# include <stdio.h>
# include <math.h>

int main()
{
    int radius;
    float area;
    printf("Enter the radius of the circle\n");
    scanf("%d", &radius);
    area=3.142*radius*radius;
    printf("The area of the circle=%.3f",area);
    
    return 0;
}