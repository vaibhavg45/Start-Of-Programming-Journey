#include <stdio.h>
int main()
{
    int a[3][4],i,j,s;
    printf("Enter Values in The 2-D Array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter Values in %d row and %d column :",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Entered Array : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the Scalar to Be Multiplied : \n");
    scanf("%d",&s);
    printf("The Matrix After Scalar Multiplication\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]*=s;
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}