#include <stdio.h>
int main()
{
    int *a;
    float *b;
    char *c;
    long int *d;
    printf("Int Size : %d\n",sizeof(a));
    printf("Float Size : %d\n",sizeof(b));
    printf("Character Size : %d\n",sizeof(c));
    printf("Long Int Size : %d\n",sizeof(d));
    return 0;
}