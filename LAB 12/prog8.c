#include <stdio.h>
void primefactor(int n)
{
    int i,pf;
    printf("The Prime Factors of %d are : ",n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            n/=i;
            printf("%d,",i);
        }
    }
}
int main()
{
    int N;
    printf("Enter A Number : ");
    scanf("%d",&N);
    primefactor(N);
    return 0;
}