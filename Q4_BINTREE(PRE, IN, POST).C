#include<stdio.h>
#include<stdlib.h>
struct btreenode
{
 struct btreenode *leftchild;
 int data;
 struct btreenode *rightchild;
};
void insert( struct btreenode **,int);
void inorder( struct btreenode *);
void preorder( struct btreenode *);
void postorder( struct btreenode *);
int main()
{
 struct btreenode * bt;
 int req,i=1,num;
 bt=NULL;
 
 printf("Enter the number of items to be inserted");
 scanf("%d",&req);
 while(i++<=req)
 {
  printf("Enter the data");
  scanf("%d",&num);
  insert(&bt,num);
 }
 printf("\n inorder traversal");
 inorder(bt);
 printf("\n preorder traversal");
 preorder(bt);
 printf("\n postorder traversal");
 postorder(bt);
}
// insert a new node in a BST
void insert(struct btreenode **sr,int num)
{
 if(*sr==NULL)
 {
  *sr=malloc(sizeof (struct btreenode));
  (*sr)->leftchild=NULL;
  (*sr)->data=num;
  (*sr)->rightchild=NULL;
  return;
 }
 else  // search the node to which new node will be attached
 {
  //if new data is less, traversal to left
  if(num< (*sr)->data)
  insert(&((*sr) ->leftchild), num);
  else // traverse to right
  insert(&((*sr) ->rightchild), num);
 }
 return;
}
//traverse in inorder
void inorder( struct btreenode *sr)
{
 if(sr!=NULL)
 {
  inorder (sr-> leftchild);
  printf("\t%d", sr->data);
  inorder (sr->rightchild);
 }
 else
 return;
}
void preorder( struct btreenode *sr)
{
 if(sr!=NULL)
 {
 printf("\t%d", sr->data);
 preorder (sr->leftchild);
 preorder (sr->rightchild);
 }
 else
 return;
}
void postorder (struct btreenode *sr)
{
 if(sr!=NULL)
 {
  postorder (sr->leftchild);
  postorder (sr->rightchild);
  printf("\t%d", sr->data);
 }
else
return;
}

