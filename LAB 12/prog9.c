#include <stdio.h>
#define pi 3.1415
float area(float rad)
{
    return pi*rad*rad;
}
int main()
{
    float r;
    printf("Enter Radius : ");
    scanf("%f",&r);
    printf("Area of Circle = %.4f",area(r));
    return 0;
}