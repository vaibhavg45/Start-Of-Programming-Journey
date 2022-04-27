#include <stdio.h>
float product(float ,int );
int main()
{
    float a;int b;
    printf("Enter Floating Point Number : ");
    scanf("%f",&a);
    printf("Enter Integer Number : ");
    scanf("%d",&b);
    float pro=product(a,b);
    printf("The Product : %.4f",pro);
    return 0;
}
float product(float x,int y)
{
    return x*y;
}