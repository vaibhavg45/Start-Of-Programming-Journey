#include <stdio.h>
int power(int a,int b)
{
    if(b!=0)
    {
        return a*power(a,b-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a,b;
    printf("Enter Base : ");
    scanf("%d",&a);
    printf("Enter Power : ");
    scanf("%d",&b);
    int pow=power(a,b);
    printf("Answer = %d",pow);
    return 0;
}