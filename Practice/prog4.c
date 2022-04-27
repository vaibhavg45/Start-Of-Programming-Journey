#include <stdio.h>
int main()
{
    int i,j,n,a=1,b;
    printf("Enyer Number of rows for Pyramid Pattern : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        b=i;
        for (j=1;j<=i-1+a;j++)
        {
            if(j<=i)
            {
                printf("%d",j);
            }
            else
            {
                printf("%d",--b);
            }
        }
        printf("\n");
        a++;
    }
    return 0;
}