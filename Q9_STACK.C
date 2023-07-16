#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int push();
int pop();
int show();
int a[20],top,bot;
int main()
{
 int op;

 while(1)
 {
  printf("\n\nEnter\n1-Push\n2-Pop\n3-Show\n4-Exit\n");
  scanf("%d",&op);
  switch(op)
  {
   case 1:
   push(); break;
   case 2:
   pop(); break;
   case 3:
   show(); break;
   default:
   exit(0);
  }
 }
}
int push()
{
 int i,n;
 if(top>=19)
 {
  printf("\nStack is full.");
  return 0;
 }
 else
 {
  printf("\nEnter no. of data to be entered = ");
  scanf("%d",&n);
  printf("\nEnter data in stack = ");
  for(i=n;i>0;i--)
  {
   scanf("%d",&a[++top]);
  }
  return 0;
 }
}
int pop()
{
 if(top==bot)
 {
  printf("\nStack is empty.");
  return 0;
 }
 else
 {
  printf("\nThe poped data is = %d",a[top--]);
  return 0;
 }
}
int show()
{
 int i;
 if(top==bot)
 {
  printf("\nStack is empty.");
  return 0;
 }
 else
 {
  printf("\n");
  for(i=top;i>bot;i--)
  printf("%d\t",a[i]);
  return 0;
 }
}
