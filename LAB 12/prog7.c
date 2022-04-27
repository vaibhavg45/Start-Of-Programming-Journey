#include <stdio.h>
float a(int aa,int b,int c)
{
    return (aa+b+c)/3.0;
}
float percentage(float a)
{
    return a;
}
int main()
{
    int sub_1,sub_2,sub_3;
    float avg;
    printf("Enter Marks in Subject 1 : ");
    scanf("%d",&sub_1);
    printf("Enter Marks in Subject 2 : ");
    scanf("%d",&sub_2);
    printf("Enter Marks in Subject 3 : ");
    scanf("%d",&sub_3);
    avg=a(sub_1,sub_2,sub_3);
    printf("The Average = %.3f\n",avg);
    printf("Percentage = %.4f%%",percentage(avg));
    return 0;
}