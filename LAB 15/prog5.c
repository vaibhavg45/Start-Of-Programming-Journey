#include <stdio.h>
int main()
{
    int a[4][4],b[4][4],c[4][4],i,j;
    printf("Enter Values in The First 2-D Array\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter Values in %d row and %d column :",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Values in The Second 2-D Array\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter Values in %d row and %d column :",(i+1),(j+1));
            scanf("%d",&b[i][j]);
        }
    }
    printf("The First Entered Array : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The Second Entered Array : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("The Resultant Array : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}