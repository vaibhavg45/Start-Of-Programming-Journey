#include <stdio.h>
int main()
{
    int a[5][5],i,j,max=0;
    printf("Enter Values in The 2-D Array\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Enter Values in %d row and %d column : ",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Entered Array : \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The Largest Number in the matrix is %d",max);
    return 0;
}