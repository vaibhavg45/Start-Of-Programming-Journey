#include <stdio.h>
int main()
{
    int arr[10],sum=0,*b,i;
    for(i=0;i<10;i++)
    {
        printf("Enter %d Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    b=arr;
    for(i=0;i<10;i++)
    {
        printf("Address of b[%d] = %u\n",i,b+i);
        printf("b[%d] = %d\n",i,*(b+i));
        sum+=*(b+i);
    }
    printf("Sum of Elements Of Array : %d",sum);
    return 0;
}