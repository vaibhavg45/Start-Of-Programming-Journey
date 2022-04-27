#include <stdio.h>
int main()
{
    int a=10,b=15,sum,*p=&a,*q=&b;
    sum=*p+*q;
    printf("%d",sum);
    return 0;
}