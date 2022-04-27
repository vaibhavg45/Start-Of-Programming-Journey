#include <stdio.h>
int main()
{
    int *b,a=10;
    b=&a;
    printf("%u\n%d",b,*b);
    return 0;
}