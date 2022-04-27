#include <stdio.h>
int main()
{
    int a,b,c,d,p,q,r,s,ans;
    float m1,m2;
    printf("Enter co ordinates of lines in (x,y) format\n");
    printf("Enter first point for first Line : ");
    scanf("%d %d",&a,&b);
    printf("Enter second point for first Line : ");
    scanf("%d %d",&c,&d);
    printf("Enter first point for second Line : ");
    scanf("%d %d",&p,&q);
    printf("Enter second point for second Line : ");
    scanf("%d %d",&r,&s);
    m1=(float)(d-b)/(c-a);
    m2=(float)(s-q)/(r-p);
    ans=m1*m2*-1;
    printf("1 is displayed of the lines are perpendicular,and any other value is printed if not.\nAnswer : %d",ans);
    return 0;
}