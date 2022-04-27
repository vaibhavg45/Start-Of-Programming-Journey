#include <stdio.h>
int main()
{
    int m[20];
    int i,c=0,sum=0;
    float avg;
    printf("Enter Marks of 20 Students : \n");
    for(i=0;i<=19;i++)
    {
        re :
        printf("Enter Marks %d th student : ",(i+1));
        scanf("%d",&m[i]);
        if(m[i]<0 || m[i]>100)
        {
            printf("Invalid Input! Enter Again\n");
            goto re;
        }
    }
    printf("The Entered Marks of Students : \n");
    for(i=0;i<=19;i++)
    {
        printf("The Marks of Roll Number %d is%d\n",(i+1),m[i]);
        sum+=m[i];
        if(m[i]>=90)
        {
            c++;
        }
    }
    avg=sum/20.0;
    printf("The Total Marks of 20 Students = %d\n",sum);
    printf("The Average of Marks = %.3f\n",avg);
    printf("The Number of Students Who Scored O Grade are %d",c);    
    return 0;
}