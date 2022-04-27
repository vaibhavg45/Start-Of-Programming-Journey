#include <stdio.h>
int main()
{
    int i,*ptr,sum=0,arr[5]={1,2,3,4,5};
    ptr=arr+4;
    for(i=0;i<5;i++)
    {
        sum+=*(ptr-i);
    }
    printf("Sum = %d",sum);
    return 0;
}