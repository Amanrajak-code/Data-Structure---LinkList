#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};
struct node * reverseLink(struct node * start)
{
   struct node* newhead=NULL;
   pre=NULL;
   cur=start;
   next=cur->next;


   while(cur!=NULL)
   {
      cur->next=pre;
      pre=cur;
      cur=next;
      next=cur->next;
   }
   newhead= pre;

   return newhead;

}
struct node * newNode(int data)
{
  struct node * newnode = (struct node *) malloc (sizeof(struct node));

  newnode->data=data;
  newnode->next=NULL;

  return newnode;
}

void traverse(struct node * start)
{
   temp=start;

   while(temp!=NULL)
   {
      printf("%d\t",temp->data);
      temp=temp->next;
   }
}


struct node *start=NULL;
struct node *temp=NULL;
struct node *pre=NULL;
struct node *cur=NULL;
struct node *next=NULL;

void traverse(struct node *);
struct node * newNode(int data);
struct node * reverseLink(struct node *);

void main()
{
    clrscr();

    start=newNode(1);
    start->next=newNode(2);
    start->next->next=newNode(3);
    start->next->next->next=newNode(4);
    start->next->next->next->next=newNode(5);

    traverse(start);
    start = reverseLink(start);
    printf("\n");
    traverse(start);

    getch();

}





