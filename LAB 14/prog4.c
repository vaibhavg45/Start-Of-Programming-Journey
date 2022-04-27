#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter Number of Elements in the Array : ");
    scanf("%d",&n);
    int a[n],i,temp;
    printf("Enter Elements in The Array : \n");
    for(i=0;i<n;i++)
    {
        a[i]=rand()%101;
    }
    printf("The Entered Array : \n");
    for(i=0;i<n;i++)
    {
        printf("Element %d : %d\n",(i+1),a[i]);
    }
    printf("The Swapped Array \n");
    if(n%2==0)
    {
        for(i=0;i<n;i+=2)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }   
    else
    {
        for(i=0;i<n-1;i+=2)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    } 
    for(i=0;i<n;i++)
    {
        printf("Element %d : %d\n",(i+1),a[i]);
    }
    return 0;
}