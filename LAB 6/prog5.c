#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter First side of triangle : ");
    scanf("%d",&a);
    printf("Enter Second side of triangle : ");
    scanf("%d",&b);
    printf("Enter Third side of triangle : ");
    scanf("%d",&c);
    d=a+b;
    e=b+c;
    f=a+c;
    int y = ((e>a)+(f>b)+(d>c))/3;
    int x = ((a*a==(b*b+c*c)) || (b*b==(a*a+c*c)) || (c*c==(a*a+b*b)))*y;
    printf("If a,b,c are sides of right angled triangle printing 1 else printing 0\n");
    printf("%d",x);
    return 0;
}