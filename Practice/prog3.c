#include <stdio.h>
int main()
{
    int i,j,n,a=65;
    printf("Enter the Number of Lines of pattern : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",(a+j-1));
        }
        printf("\n");
    }
    return 0;
}