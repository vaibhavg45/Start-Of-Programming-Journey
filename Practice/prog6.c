#include <stdio.h>
int main()
{
    int i,j,n;
    char ch='A',c;
    printf("Enter the Number of Lines of pattern : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=ch;
        for(j=1;j<=i;j++)
        {
            printf("%c",c);
            c--;
        }
        printf("\n");
        ch++;
    }
    return 0;
}