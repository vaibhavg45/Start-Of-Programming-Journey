#include <stdio.h>
int div(int a,int b)
{
    return a%b==0?b:div(b,a%b);
}
int main()
{
    int a,b,c,gcd1,gcd2;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    printf("Enter Third Number : ");
    scanf("%d",&c);
    gcd1=(a>b)?div(a,b):div(b,a);
    gcd2=(gcd1>c)?div(gcd1,c):div(c,gcd1);
    printf("The GCD of %d,%d and %d is %d",a,b,c,gcd2);
    return 0;
}