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
    int N,fct;
    printf("Enter an Integer : ");
    scanf("%d",&N);
    if(N>=0)
    {
        fct=fact(N);
        printf("Factorial of %d = %d",N,fct);
    }
    else
    {
        printf("Invalid Input!");
    }
    return 0;
}