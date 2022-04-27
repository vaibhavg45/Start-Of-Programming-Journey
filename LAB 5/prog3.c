#include<stdio.h>
void main()
{
    float r1,r2,r3,rs,a,rp,v,is,ip;
    printf("Enter First Resistance :");
    scanf("%f",&r1);
    printf("Enter Second Resistance :");
    scanf("%f",&r2);
    printf("Enter Third Resistance :");
    scanf("%f",&r3);
    printf("Enter Voltage :");
    scanf("%f",&v);
    rs=r1+r2+r3;
    a=1/r1+1/r2+1/r3;
    rp=1/a;
    is=v/rs;
    ip=v/rp;
    printf("Series Resistance : %.2f\n",rs);
    printf("Parallel Resistance : %.3f\n",rp);
    printf("Series Current : %.4f\n",is);
    printf("Parallel Current : %.4f",ip);
}