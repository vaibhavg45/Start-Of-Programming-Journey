#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the Order of Matrix :\n");
    printf("Enter Row Size : ");
    scanf("%d",&n);
    printf("Enter Colunn Size : ");
    scanf("%d",&m);
    int a[n][m],b[m][n],i,j;
    printf("Enter Values in The 2-D Array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter Values in %d row and %d column :",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Entered Array : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("The Transpose Matrix : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}