#include <stdio.h>
void largest(int *a);
int main()
{
    int a[20],i;
    printf("Enter Elements In the Array\n");
    for(i=0;i<20;i++)
    {
        printf("Enter Element %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    largest(a);
    return 0;
}
void largest(int *a)
{
    int max=0,i;
    for(i=0;i<20;i++)
    {
        if(max<*(a+i))
        {
            max=*(a+i);
        }
    }
    printf("Largest Number in Array : %d",max);
}