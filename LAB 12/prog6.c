#include <stdio.h>
#include <math.h>
int sum(int a,int b,int c,int d,int e)
{
    int sum=a+b+c+d+e;
    return sum;
}
float average(int a,int b,int c,int d,int e,int sum)
{
    return sum/5.0;
}
float std(int a,int b,int c,int d,int e,int sum,float avg)
{
    return sqrt((pow(a-avg,2)+pow(b-avg,2)+pow(c-avg,2)+pow(d-avg,2)+pow(e-avg,2))/5);;
}
int main()
{
    int a,b,c,d,e;
    printf("Enter 5 Integers : \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int s=sum(a,b,c,d,e);
    float av=average(a,b,c,d,e,s);
    float stdv=std(a,b,c,d,e,a,av);
    printf("Sum = %d\n",s);
    printf("Average = %f\n",av);
    printf("Standard Deviation = %f",stdv);
    return 0;
}