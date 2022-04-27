#include <stdio.h>
#include <math.h>
int main()
{
    int a[10][2],i,j;
    printf("Enter Values in The 2-D Array\n");
    for(i=0;i<10;i++)
    {
        printf("Enter %d th x,y Co-ordinates :\n",(i+1));
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Entered Co-ordinates : \n");
    for(i=0;i<10;i++)
    {
        printf("(x%d,y%d) : ",(i+1),(i+1));
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The Distance Between First And Last Point = %f",sqrt(pow(a[9][0]-a[0][0],2)+pow(a[9][1]-a[0][1],2)));
    return 0;
}