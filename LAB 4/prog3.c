#include <stdio.h>
#define sqr(a) a*a
#define inc(b) b+1
#define s(a) (a)*(a)
#define i(b) (b+1)
int main()
{
    int p,q,r;
    printf("....\n");
    p=sqr(3-1);
    q=inc(2)*sqr(4);
    r=inc(4+1)*sqr(2*2);
    printf("p = %d\n",p);
    printf("q = %d\n",q);
    printf("r = %d\n",r);
    printf("....\n");
    p=s(3-1);
    q=i(2)*s(4);
    r=i(4+1)*s(2*2);
    printf("p = %d\n",p);
    printf("q = %d\n",q);
    printf("r = %d\n",r);
    return 0;
}