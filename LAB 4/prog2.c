#include <stdio.h>
# define pi 3.14
int main()
{
    float radius,area;
    printf("Enter The radius : ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("The area of circle = %.3f",area);
    return 0;
}