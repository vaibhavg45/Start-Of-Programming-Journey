#include <stdio.h>
void swap(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter first Variable : ");
    scanf("%d",&a);
    printf("Enter second Variable : ");
    scanf("%d",&b);
    printf("Values Before Swap \na=%d\tb=%d\n",a,b);
    swap(&a,&b);
    printf("Values After Swap \na=%d\tb=%d",a,b);
    return 0;
}
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}