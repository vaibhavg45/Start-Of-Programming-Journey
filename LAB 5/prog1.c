#include <stdio.h>
int main()
{
    int a,b,c,d;
    float m;
    printf("Enter point One :");
    scanf("%d,%d",&a,&b);
    printf("Enter point Two :");
    scanf("%d,%d",&c,&d);
    m=(float)(d-b)/(c-a);
    printf("Slope : %.3f",m);
    return 0;
}