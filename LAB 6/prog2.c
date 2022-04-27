#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,sum;
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
    printf("Sum of All sides will be printed if Triangle property follows and 0 if it does not\n");
    sum=y*(a+b+c);
    printf("%d",sum);
    return 0;
}