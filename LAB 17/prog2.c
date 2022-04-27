#include <stdio.h>
int main()
{
    int b[4][3]={5,9,1,7,2,0,3,4,6,8,2,7};
    printf("%u\n",b);
    printf("%u\n",b+1);
    printf("%u\n",&b);
    printf("%u\n",*(&b));
    printf("%u\n",*b);
    printf("%d\n",**b);
    printf("%u\n",&b+1);
    printf("%u\n",*(b+1));
    printf("%d\n",*(*b+1));
    printf("%d\n",*((*b+1)+1));
    printf("%d\n",*((*b+2)+1));
    printf("%d\n",*((*b+2)+2));
    return 0;
}