#include <stdio.h>
void leapcheck(int year)
{
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        printf("The Year %d is a Leap Year.",year);
    }
    else
    {
        printf("The Year %d is Not a Leap Year.",year);
    }
}
int main()
{
    int y;
    printf("Enter Year to be Checked for Leap Year : ");
    scanf("%d",&y);
    leapcheck(y);
    return 0;
}