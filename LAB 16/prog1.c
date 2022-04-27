#include <stdio.h>
int main()
{
    int n,m,x,y;
    printf("Enter Row size of matrix 1 : ");
    scanf("%d",&n);
    printf("Enter Column size of matrix 1 : ");
    scanf("%d",&m);
    printf("Enter Row size of matrix 2 : ");
    scanf("%d",&x);
    printf("Enter Column size of matrix 2 : ");
    scanf("%d",&y);
    if(m==x)
    {
	    int a[n][m],b[x][y],c[n][y],i,j,count=0;
	    printf("Enter Values in Matrix 1 :\n");
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            printf("Enter Value of %d row ,%d column : ",(i+1),(j+1));
	            scanf("%d",&a[i][j]);
	        }
	    }
	    printf("Enter Values in Matrix 2 :\n");
	    for(i=0;i<x;i++)
	    {
	        for(j=0;j<y;j++)
	        {
	            printf("Enter Value of %d row ,%d column : ",(i+1),(j+1));
	            scanf("%d",&b[i][j]);
	        }
	    }
	    printf("Entered Matrix 1 :\n");
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            printf("%d   ",a[i][j]);
	        }
	        printf("\n");
	    }
	    printf("\n");
	    printf("Entered Matrix 2 :\n");
	    for(i=0;i<x;i++)
	    {
	        for(j=0;j<y;j++)
	        {
	            printf("%d   ",b[i][j]);
	        }
	        printf("\n");
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<y;j++)
	        {
	            c[i][j]=0;
	        }
	    }
	    printf("\nMultiplied Matrix : \n");
	    for(i=0;i<n;i++)
	    {
	    	for(j=0;j<y;j++)
	    	{
	    		while(count<m)
	    		{
	    			c[i][j]=c[i][j]+(a[i][count]*b[count][j]);
	    			count++;
	    		}
				count=0;
			}
		}
		for(i=0;i<n;i++)
	    {
	        for(j=0;j<y;j++)
	        {
	            printf("%d   ",c[i][j]);
	        }
	        printf("\n");
	    }
	}
	else
	{
		printf("Size of matrix invalid for multiplication.");
	}
    return 0;
}


