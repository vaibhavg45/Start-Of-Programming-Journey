#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10];
    int i;
    printf("Enter Elements in The Array : \n");
    for(i=0;i<=9;i++)
    {
        a[i]=(int)rand()%101;
    }
    printf("The Entered Array : \n");
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }    
    return 0;
}
