#include <stdio.h>
#include <stdbool.h>
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
    printf("Does it Satisfy Triangle Property? 1 for YES and 0 for NO\n");
    printf("%d",y);
    printf("");
    return 0;
}