#include <stdio.h>
int search(int item)
{
    int i,n,pos=-1;
    printf("Enter Number of Elements in The Array : ");
    scanf("%d",&n);
    int m[n];
    printf("Enter Values of %d elements : \n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d th Value  : ",(i+1));
        scanf("%d",&m[i]);
    }
    printf("The Entered Array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",m[i]);
    }    
    for(i=n-1;i>=0;i--)
    {
        if(m[i]==item)
        {
            pos=i;
            break;
        }
    }
    return pos;
}
int search1(int item,int l,int r)
{
    int i,n,pos=-1;
    printf("Enter Number of Elements in The Array : ");
    scanf("%d",&n);
    int m[n];
    printf("Enter %d Values : \n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d th Value : ",(i+1));
        scanf("%d",&m[i]);
    }
    printf("The Entered Array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",m[i]);
    }    
    for(i=l;i<r;i++)
    {
        if(m[i]==item)
        {
            pos=i;
            break;
        }
    }
    return pos;
}
int main()
{
    int find,l,r;
    printf("Enter The Item to be Searched : ");
    scanf("%d",&find);
    printf("First Function\n");
    int pos=search(find);
    if(pos==-1)
    {
        printf("The Item %d is Not Found in the Array\n",find);
    }
    else
    {
        printf("The Item %d is found at %d position in the Array\n",find,(pos+1));
    }
    printf("Second Function\n");
    printf("Enter The Item to be Searched : ");
    scanf("%d",&find);
    printf("Enter Left Search Point : ");
    scanf("%d",&l);
    printf("Enter Right Search Point : ");
    scanf("%d",&r);
    int p=search1(find,l,r);
    if(p==-1)
    {
        printf("The Item %d is Not Found in the Given Segment of Array\n",find);
    }
    else
    {
        printf("The Item %d is found at %d position in the Array\n",find,(p+1));
    }
    return 0;
}
