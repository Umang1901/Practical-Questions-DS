// Write a program that accepts two polynomials as input and adds them
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int P1[6][2],P2[6][2],T1,T2,match,proceed,i,j;
 printf("Enter the number of terms in the first polynomial. They should be less than 6 : \n");
 scanf("%d",&T1);
 printf("Enter the number of terms in the second polynomial. They should be lessthan 6: \n");
 scanf("%d",&T2);
 printf("Enter the cofficient and exponent of each term of the first polynomial : \n");
 for(i=0;i<T1;i++)
 {
  scanf("%d%d",&P1[i][0],&P1[i][1]);
 }
  printf("Enter the cofficient and exponent of each term of the second polynomial : \n");
 for(i=0;i<T1;i++)
 {
  scanf("%d%d",&P2[i][0],&P2[i][1]);
 }
 printf("The resultant polynomial due to the addition  of the outputs two polynomials : \n");
 for(i=0;i<T1;i++)
 {
  match=0;
  for(j=0;j<T2;j++)
  {
   if(match==0)
   if(P1[i][1]==P2[j][1])
   {
    printf("%d%d\n",(P1[i][0]+P2[j][0]),P1[i][1]);
    match=1;
   }
  }
 }
 for(i=0;i<T1;i++)
 {
  proceed=1;
  for(j=0;j<T2;j++)
  {
   if(proceed==1)
   if(P1[i][1]==P2[j][1])
   proceed=1;
   else
   proceed=0;
  }
  printf("%d %d\n",P1[i][0],P1[i][1]);
 }
 for(i=0;i<T2;i++)
 {
  proceed=1;
  for(j=0;j<T1;j++)
  {
    if(proceed==1)
    if(P2[i][1]!=P1[j][1])
    proceed=1;
    else
    proceed=0;
  }
  if(proceed==1)
  printf("%d %d",P2[i][0],P2[i][1]);
 }
}