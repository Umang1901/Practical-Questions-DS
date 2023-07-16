//The program accepts a matrix as input and prints the 3-tuple representation of it
#include<stdio.h>
int main()
{
 int a[5][6],r,c,i,j;

 printf("Enter the order of the matrix and should be less than 5 x 5:\n");
 scanf("%d %d",&r,&c);
 printf("Enter the elements of the matrix:\n");
 for(i=0;i<r;i++)
 for(j=0;j<c;j++)
 {
  scanf("%d",&a[i][j]);
 }
 printf("The 3-tuple representation of the matrix is:\n");
 for(i=0;i<r;i++)
 for(j=0;j<c;j++)
 {
 if(a[i][j]!=0)
 {
  printf("%d %d %d\n", (i),(j),a[i][j]);
 }
 }
 return 0;
}