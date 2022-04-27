#include <stdio.h>
int fibo(int N)
{
    return (N==1 || N==2 ?1:fibo(N-1)+fibo(N-2));
}
int main()
{
    int n,i;
    printf("Enter Number of Terms of Fibonacci Series : ");
    scanf("%d",&n);
    printf("The Fibonacci Series Upto %d terms : ",n);
    for(i=1;i<=n;i++)
    {
        printf("%d,",fibo(i));
    }
    return 0;
}