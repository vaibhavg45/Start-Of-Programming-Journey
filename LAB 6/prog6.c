#include <stdio.h>
#include <math.h>
#define g 9.8
#define pi 3.14
int main()
{
    float t1,t2,t3,t4,t5;
    t1=2*pi*sqrt(10/g);
    t2=2*pi*sqrt(20/g);
    t3=2*pi*sqrt(30/g);
    t4=2*pi*sqrt(40/g);
    t5=2*pi*sqrt(50/g);
    printf("LENGTH(in m)\t\tTIME(in sec)\n");
    printf("\t10\t\t%f\n",t1);
    printf("\t20\t\t%f\n",t2);
    printf("\t30\t\t%f\n",t3);
    printf("\t40\t\t%f\n",t4);
    printf("\t50\t\t%f\n",t5);
    return 0;
}