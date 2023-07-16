//WAP TO IMPLEMENTATION OF SELECTION SORT IN ASCENDING ORDER.
#include<stdio.h>
int main(){
    int a[5],i,j,temp;
    printf("Enter value in array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Selection Sort:");
    printf("\n Array Before Sorting:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
       }
    }
}
printf("\n Array After sorting:\n");
for(i=0;i<5;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}
