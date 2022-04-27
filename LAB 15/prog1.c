#include <stdio.h>
int main()
{
    int a[4][5],i,j;
    printf("Enter Values in The 2-D Array\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Enter Values in %d row and %d column : ",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Entered Array : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}