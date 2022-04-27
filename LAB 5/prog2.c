#include<stdio.h>//secondary voltage
void main()
{
    int v1,n1,n2;
    float v2;
    printf("Enter Primary voltage :");
    scanf("%d",&v1);
    printf("Enter Primary Turns :");
    scanf("%d",&n1);
    printf("Enter Secondary Turns :");
    scanf("%d",&n2);
    v2=(float)(v1*n1)/n2;
    printf("The Secondary Voltage is : %.2f",v2);
}