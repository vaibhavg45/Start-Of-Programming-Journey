#include <stdio.h>
int main()
{
    int a=20,b=6,p,q;
    p=--a-b;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("p = %d\n",p);
    q=--p+p;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("p = %d\n",p);
    printf("q = %d",q);
    return 0;
}