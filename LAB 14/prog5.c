#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number of Elements of required array : ");
    scanf("%d",&n);
    int a[n],i,temp;
    printf("Enter Values in the Array : \n");
    for(i=0;i<n;i++)
    {
        printf("Enter %d th Value : ",(i+1));
        scanf("%d",&a[i]);
    }
    printf("The Entered Array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d th Value : %d\n",(i+1),a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-(i+1)];
        a[n-(i+1)]=temp;
    }
    printf("The Swapped Array :\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d : %d\n",(i+1),a[i]);
    }
    return 0;
}