#include<stdio.h>
#include<conio.h>
int main()
{
    int i, A[10], num;
    printf("Enter all the elements : ");
    for(i=0;i<10;i++)
    scanf("%d",&A[i]);
    printf("Enter the value to be searched : ");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(A[i]==num)
        break;
    }
    if(i==10)
    printf("Number is not present in the array");
    else
    printf("Number is at position %d",i+1);
    return 0;
}
