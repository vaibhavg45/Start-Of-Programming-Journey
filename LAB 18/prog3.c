#include <stdio.h>
int large(int *a,int *b,int n)
{
    int i,sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        sum1+=*(a+i);
        sum2+=*(b+i);
    }
    if(sum1==sum2)
    {
        return 0;
    }
    else if(sum1>sum2)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    int x,y;
    printf("Size of First Array : ");
    scanf("%d",&x);
    printf("Size of Second Array : ");
    scanf("%d",&y);
    int a[x],b[y],i,n,l;
    printf("Enter Values in First Array\n");
    for(i=0;i<x;i++)
    {
        printf("Enter Element %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    printf("Enter Values in Second Array\n");
    for(i=0;i<y;i++)
    {
        printf("Enter Element %d : ",(i+1));
        scanf("%d",&b[i]);
    }
    printf("Enter Number of Elements to Be Compared : ");
    scanf("%d",&n);
    if(n<=x && n<=y)
    {
        l=large(a,b,n);
        if(l==0)
        {
            printf("Equal Sum");
        }
        else if(l==1)
        {
            printf("Array 1 Sum is Larger");
        }
        else
        {
            printf("Array 2 Sum is Larger");
        }
    }
    else
    {
        printf("Wrong Input!");
    }
    return 0;
}