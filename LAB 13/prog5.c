#include <stdio.h>
int fact(int N)
{
    if(N==1 || N==0)
    {
        return 1;
    }
    else
    {
        return N*fact(N-1);
    }
}
int main()
{
    int i,fct;
    for(i=1;i<=8;i++)
    {
        fct=fact(i);
        printf("Factorial of %d = %d\n",i,fct);
    }
    return 0;
}