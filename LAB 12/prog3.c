#include <stdio.h>
#include <math.h>
int power(int a,int b)
{
    int p=(int)pow(a,b);
    return p;
}
int main()
{
    int a,b;
    printf("Enter Base Integer Number : ");
    scanf("%d",&a);
    printf("Enter Positive Exponent Integer Number : ");
    scanf("%d",&b);
    int p=power(a,b);
    printf("The Power is : %d",p);
    return 0;
}