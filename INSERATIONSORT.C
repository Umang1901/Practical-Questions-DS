//WAP TO IMPLEMENTATION OF INSERTION SORT.
#include<stdio.h>
int main(){
    int a[5],i,j,k,temp;
    printf("Enter value in array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Insertion Sort:");
    printf("\n Before Sorting:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=1;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[i])
        {
            temp=a[j];
            a[j]=a[i];
            for(k=i;k>j;k--)
            a[k]=a[k-1];
            a[k+1]=temp;

        }
    }
}
printf("\nArray After softing:\n");
for(i=0;i<5;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}
