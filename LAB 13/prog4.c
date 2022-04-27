#include <stdio.h>
int div(int a,int b)
{
    return a%b==0?b:div(b,a%b);
}
int main()
{
    int a,b,gcd;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter second Number : ");
    scanf("%d",&b);
    gcd=(a>b)?div(a,b):div(b,a);
    printf("The GCD of %d and %d is %d",a,b,gcd);
    return 0;
}