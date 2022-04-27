#include <stdio.h>
#define g 9.8
void main()
{
    float u,a,v,s;
    int i,t;
    printf("Enter Initial Velocity :");
    scanf("%f",&u);
    printf("Enter time upto which final velocity and displacement is to be calculated :");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("When time t = %d\n",i);
        v=u+g*i;
        s=u*i+.5*g*i*i;
        printf("The Final Velocity : %.3f m/s\n",v);
        printf("Displacement : %.2f m\n",s);
    }
}