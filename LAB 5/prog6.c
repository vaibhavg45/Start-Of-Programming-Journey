#include <stdio.h>
void main()
{
    float r1,r2,r3,rs,a,rp,v,is,ip;
    char ch;
    printf("Enter 's' for Series or 'p' for Parallel :");
    scanf("%c",&ch);
    printf("Enter First Resistance :");
    scanf("%f",&r1);
    printf("Enter Second Resistance :");
    scanf("%f",&r2);
    printf("Enter Third Resistance :");
    scanf("%f",&r3);
    printf("Enter Voltage :");
    scanf("%f",&v);
    if(ch=='s')
    {
        rs=r1+r2+r3;
        is=v/rs;
        printf("Series Resistance : %.2f\n",rs);
        printf("Series Current : %.4f\n",is);
    }
    else if(ch=='p')
    {
        a=1/r1+1/r2+1/r3;
        rp=1/a;
        ip=v/rp;
        printf("Parallel Resistance : %.3f\n",rp);
        printf("Parallel Current : %.4f",ip);
    }
    else
    {
        printf("Wrong Choice");
    }
}