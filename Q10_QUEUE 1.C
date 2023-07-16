//CREATE A LINK LIST AND SORT THE ENTERED VALUE
#include<stdio.h>
#include<alloc.h>
#include<conio.h>

/*Structure containing a data part and link part*/
struct node
{
    int data;
    struct node *link;
};

void add(struct node**,int);
void display(struct node*);
int count(struct node*);
void main()
{
    struct node *p;
    clrscr();
    p=NULL;  //Emply linked list

    add(&p,5);
    add(&p,1);
    add(&p,6);
    add(&p,4);
    add(&p,7);

    display(p);
    printf("\nNo. of elements in Linked list=%d",count(p));
    getch();

}

/*Adds node to an ascending order linked list*/
void add(struct node **q,int num)
{
    struct node *r,*temp= *q;

    r=malloc(sizeof(struct node));
    r->data=num;

    /*if list is empty or if new node is to be inserted before the first node*/
    if(*q==NULL || (*q)->data>num)
    {
	*q=r;
	(*q)->link=temp;

    }
    else
    {
	/*transverse the entire linked list to search the position to insert the new node*/
	while(temp!=NULL)
	{
	    if(temp->data<=num &&(temp->link->data>num || temp->link==NULL))
	    {
		r->link=temp->lin