#include <stdio.h>
int main()
{
    int a[20],i,p=0,n=0,e=0,o=0;
    printf("Enter Values in The 1-D Array\n");
    for(i=0;i<20;i++)
    {
        printf("Enter %d th Value in Array :",(i+1));
        scanf("%d",&a[i]);
    }
    printf("The Entered Array : \n");
    for(i=0;i<20;i++)
    {
        printf("%d\t",a[i]);
        a[i]>=0?p++:n++;
        a[i]%2==0?e++:o++;
    }
    printf("\nThe Number of Positive Integers = %d",p);
    printf("\nThe Number of Negetive Integers = %d",n);
    printf("\nThe Number of Even Integers = %d",e);
    printf("\nThe Number of Odd Integers = %d",o);
    return 0;
}