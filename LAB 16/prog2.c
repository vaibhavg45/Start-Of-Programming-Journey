
#include <stdio.h>
int main()
{
    int i,j,n,m,max=0;
    printf("Enter size of Square Matrix(n*n) : ");
    scanf("%d",&n);
    if(n>=5)
    {
        int a[n][n];
        printf("Enter Values in The Array : \n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("Enter Value of %d row ,%d column : ",(i+1),(j+1));
    	        scanf("%d",&a[i][j]);
            }
        }
        printf("The Entered Matrix : \n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d   ",a[i][j]);
                if(i==j)
                {
                    if(max<a[i][j])
                    {
                        max=a[i][j];
                    }
                }
            }
            printf("\n");
        }
        printf("\nThe Largest Number in The Main Diagonal is %d",max);
    }
    else
    {
        printf("Array Size Small or Invalid");
    }
    return 0;
}


