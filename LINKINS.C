#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

 struct node
 {
   int data;
   struct node* next;
 };
  //function to insert a new node at the end.
  void insertEnd(struct node**head,int data)
   {
    struct node*new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=NULL;
   if(*head==NULL)
   {
    *head=new_node;
    }
   else
   {
    struct node*temp=*head;
    while(temp->next!=NULL)
    {
     temp=temp->next;
    }
    temp->next=new_node;
   }
    printf("element %d inserted at the end.\n",data);
   }
      void main()  {
       struct node* head=NULL;
       int choice,value,pos,i;
       clrscr();

   do
   {
    //menu-driven options
	printf("\menu:\n");
	printf("1.Insert at the end\n");
	
