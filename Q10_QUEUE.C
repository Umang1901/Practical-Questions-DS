#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int insert();
int deleteElement();
int display();
int a[20], rear=-1, front=0, max=20;
int main()
{
 int op;
 while(1)
 {
  printf("\n\n\nEnter\n1-Insert\n2-Delete\n3-Display\n4-Exit\n");
  scanf("%d",&op);
  switch(op)
  {
   case 1:
   insert(); break;
   case 2:
   deleteElement(); break;
   case 3:
   display(); break;
   default:
   exit(0);
  }
 }
}
int insert()
{
 int n,i;
 if(rear>=max-1)
 {
  printf("\nQueue is full");
  return 0;
 }
 else
 {
  printf("\nEnter no. of data to be entered - ");
  scanf("%d",&n);
  printf("\nEnter data in queue = ");
  for(i=n;i>0;i--)
  {
   rear++;
   scanf("%d",&a[rear]);
  }
  return 0;
 }
}
int deleteElement()
{

  if(rear==-1)
  {
   printf("\nQueue is empty");
   return 0;
  }
  else
  {
   printf("\nThe deleted data is %d.\t",a[front]);
   front++;
   return 0;
  }
 }
 int display()
 {
  int i;
  if(rear==-1)
  {
   printf("\nQueue is empty");
   return 0;
  }
  else
  {
   for(i=front;i<=rear;i++)
   printf("%d\t",a[i]);
   return 0;
  }
 }
