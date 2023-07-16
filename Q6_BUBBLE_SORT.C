#include<stdio.h>
#include<conio.h>
void Bubble_sort(int arr[], int n)
{
 for (int i=0; i<n-1; i++)
 {
  for(int j=0; j<n-i-1;  j++)
  {
  if(arr[j]>arr[j+1])
   {
    int temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
   }
  }
 }
}
int main()
{
 int arr[]={54,87,32,90,45};
 int n=sizeof(arr)/sizeof(arr[0]);
 Bubble_sort(arr,n);
 printf("Sorted array is : ");
 for(int i=0; i<n; i++)
 {
  printf("%d ",arr[i]);
 }
 printf("\nn = %d\nsizeof(arr) = %d\nsizeof(arr[0]) = %d ",n,sizeof(arr),sizeof(arr[0]));
 getch();
}











