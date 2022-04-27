#include<stdio.h>
#define g 9.8
void main()
{
    float u,a,v,s;
    int t=1;
    printf("Enter Initial Velocity :");
    scanf("%f",&u);
    v=u+g*t;
    s=u*t+.5*g*t*t;
    printf("The Final Velocity : %.3f m/s\n",v);
    printf("Displacement : %.2f m for %d s\n",s,t);
    t++;
    v=u+g*t;
    s=u*t+.5*g*t*t;
    printf("The Final Velocity : %.3f m/s\n",v);
    printf("Displacement : %.2f m for %d s\n",s,t);
    t++;
    v=u+g*t;
    s=u*t+.5*g*t*t;
    printf("The Final Velocity : %.3f m/s\n",v);
    printf("Displacement : %.2f m for %d s\n",s,t);
    t++;
    v=u+g*t;
    s=u*t+.5*g*t*t;
    printf("The Final Velocity : %.3f m/s\n",v);
    printf("Displacement : %.2f m for %d s\n",s,t);
}