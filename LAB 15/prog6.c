#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the Order of Matrix :\n");
    printf("Enter Row Size : ");
    scanf("%d",&n);
    printf("Enter Colunn Size : ");
    scanf("%d",&m);
    int a[n][m],i,j,flag=0;
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
    if(n==m)
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<m;j++)
            {
                if(a[i][j]!=a[j][i])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            printf("The Entered Matrix is Symmetric");
        }
        else
        {
            printf("The Entered Matrix is Not Symmetric");
        }
    }
    else
    {
        printf("Wrong Input.Row and Column Size Mismatch.");
    }
    return 0;
}