#include <stdio.h>
int SumOfDigits(long int N)
{
    if(N!=0)
    {
        return N%10+SumOfDigits(N/10);
    }
}
int main()
{
    long int N;
    int s;
    printf("Enter an Integer : ");
    scanf("%ld",&N);
    s=SumOfDigits(N);
    printf("The Sum of Digits of %ld = %d",N,s);
    return 0;
}