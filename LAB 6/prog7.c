#include <stdio.h>
int main()
{
    float f1,f2,f3,f4,f5;
    int k1,k2,k3,k4,k5;
    f1=((9.0*20)/5)+32;
    k1=20+273;
    f2=((9.0*40)/5)+32;
    k2=40+273;
    f3=((9.0*60)/5)+32;
    k3=60+273;
    f4=((9.0*80)/5)+32;
    k4=80+273;
    f5=((9.0*100)/5)+32;
    k5=100+273;
    printf("CELSIUS\t\tFARHENHIET\tKELVIN\n");
    printf(" 20     \t   %.2f     \t  %d\n",f1,k1);
    printf(" 40     \t   %.2f     \t  %d\n",f2,k2);
    printf(" 60     \t   %.2f     \t  %d\n",f3,k3);
    printf(" 80     \t   %.2f     \t  %d\n",f4,k4);
    printf(" 100    \t   %.2f     \t  %d\n",f5,k5);
    return 0;
}