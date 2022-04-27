#include <stdio.h>
int leader(int N)
{
    int i,n,max,c=1;
    printf("Second Function : \n");
    for(i=1;i<=N;i++)
    {
        printf("Enter a Number : ");
        scanf("%d",&n);
        if(i==1)
        {
            max=n;
        }
        if(max<n)
        {
            max=n;
            c++;
        }
    }
    return c;
}
int max(int N)
{
    int i,n,max;
    printf("First Function : \n");
    for(i=1;i<=N;i++)
    {
        printf("Enter a Number : ");
        scanf("%d",&n);
        if(i==1)
        {
            max=n;
        }
        if(max<n)
        {
            max=n;
        }
    }
    return max;
}
int main()
{
    int N;
    printf("Enter the Number of Numbers : ");
    scanf("%d",&N);
    int m=max(N);
    int leadercount=leader(N);
    printf("The Number Which is Maximum in First Functiom : %d\n",m);
    printf("The Number of Leaders in Second Function : %d",leadercount);
    return 0;
}