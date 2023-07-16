#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define TRUE 1
#define FALSE 0
struct btreenode
{
struct btreenode *leftchild;
int data;
struct btreenode *rightchild;
};
void insert(struct btreenode **, int);
void delete(struct btreenode **, int);
void search(struct btreenode **,int num,int struct btreenode **,int num,int struct btreenode **,int *);
void inorder(struct btreenode *);
void main()
{
 struct btreenode *bt;
 int req, i=0, num;
 int a[]={ 11,9,13,8,10,12,14,15,7};
 bt=NULL;
 clrscr();
 while(i<=8)
 {
  insert(&bt,a[i]);
  i++;
 }
 clrscr();
 printf("Binary tree before deletion \n");
 inorder(bt);
 delete(&bt,10);
 printf("\nBinary tree before deletion \n");
 inorder(bt);
 delete(&bt,14);
 printf("\nBinary tree before deletion \n");
 inorder(bt);
 delete(&bt,8);
  printf("\nBinary tree before deletion \n");
 inorder(bt);
 delete(&bt,13);
  printf("\nBinary tree before deletion \n");
 inorder(bt);
}
void insert(struct btreenode **sr, int num)
{
 if(*sr==NULL)
 {
  *sr=malloc (sizeof(struct btreenode));
  (*sr)->leftchild=NULL;
  (*sr)->data=num;
  (*sr)->rightchild=NULL;
 }
 else
 {
  if(num<(*sr)->data)
  insert(&((*sr)->leftchild),num);
  else
  insert(&((*sr)->leftchild),num);
 }
}
//delete a node from the bst
void delete(struct btreenode **root,int num)
{
int found;
struct btreenode *parent, *x, *xsucc;
if(*root==NULL)
{
 printf("\n tree is empty");
 return;
}
parent=x=NULL;
search(root, num, &parent,&x,&found);
if(found==FALSE)
{
 printf("\n data to be deleted not found");
 return;
}
if(x->leftchild !=NULL && x->rightchild !=NULL)
{
 parent=x;
 xsucc=x->rightchild;
 while(xsucc->leftchild!=NULL)
 {
  parent=x;
  xsucc=xsucc->leftchild;
 }
 x->data=xsucc->data;
 x=xsucc;
}
// no child
if(x->leftchild ==NULL && x->rightchild ==NULL)
{
 if(parent->rightchild==x)
 parent->rightchild=NULL;
 else
 parent->leftchild=NULL;
 free(x);
 return;
}
 //deleted node has only rightchild
if(x->leftchild ==NULL && x->rightchild !=NULL)
{
 if(parent->leftchild==x)
 parent->leftchild=x->rightchild;
 else
 parent->rightchild=x->rightchild;
 free(x);
 return;
}
//deleted node has only leftchild
if(x->leftchild !=NULL && x->rightchild ==NULL)
{
 if(parent->leftchild==x)
 parent->leftchild=x->leftchild;
 else
 parent->rightchild=x->leftchild;
 free(x);
 return;
}
}
//return the address of the node to be deleted
void search(struct btreenode **root,  struct btreenoden **par, struct btreenode **x,int *found )
{
 struct btreenode *q;
 q=*root;
 *found=FALSE;
 *par=NULL;
 while(q!=NULL)
 {
  if(q->data==num)
  {
    *found=TRUE;
    *x=q;
    return;
  }
  *par=q;
  if(q->data>num)
  q=q->leftchild;
  else
  q=q->rightchild;
 }
}
//traverse a BST
void inorder( struct btreenode *sr)
{
 if(sr!=NULL)
 {
  inorder(sr->leftchild);
  printf("%d\t",sr->data);
  inorder(sr->rightchild);
 }
}