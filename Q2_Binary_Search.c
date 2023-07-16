#include<stdio.h>
int main()
{
    int i, a[10],mid, low=0, upp=9,n,f=1;
    printf("Enter value in array : ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("Enter no. to be search : ");
    scanf("%d",&n);
    for(mid=(low+upp)/2; low<=upp ; mid=(low+upp)/2)
    {
        if(a[mid]==n)
        {
           printf("Number is at position %d",mid+1);
           f=0;
           
        }
        if(a[mid]>n)
        upp=mid-1;
        else
        low=mid+1;
    }
    if(f==1)
    printf("Number not present");
    return 0;
}
