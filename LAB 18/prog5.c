#include <stdio.h>
int check(int *a,int *max,int *small);
int main()
{
    int a[20],i,count,max=0,small=0;
    printf("Enter Elements In the Array\n");
    for(i=0;i<20;i++)
    {
        printf("Enter Element %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    count=check(a,&max,&small);
    printf("Largest Number in Array = %d\n",max);
    printf("Smallest Number in Array = %d\n",small);
    printf("Number of Odd Numbers in Array = %d\n",count);
    return 0;
}
int check(int *a,int *max,int *small)
{
    int i,c=0;
    for(i=0;i<20;i++)
    {
        if(*max<*(a+i))
        {
            *max=*(a+i);
        }
        if(*(a+i)%2==1)
        {
            c++;
        }
    }
    *small=*max;
    for(i=0;i<20;i++)
    {
        if(*small>*(a+i))
        {
            *small=*(a+i);
        }
    }
    return c;
}