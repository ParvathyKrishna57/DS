
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
   // function to insert at the beginning
     void insertbeginning(struct Node** head,int data){
       struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
       new_node->data=data;
       new_node->next=*head;
       *head=new_node;
	printf("element %d inserted at the beginning.\n",data);
      }
       //function to insert at a specific position
	 void insertAtPosition(struct Node**head,int data,int position)
	 {
	   struct Node*new_node=(struct Node*)malloc(sizepf(struct Node));
	   new_node->data=data;

	 if(position==1)
	 {
	  new_node->next=*head;
	  *head=new_node;
	  printf("Element %d inserted at position %s.\n",data,position);
	  return;
	 }
	   struct Node*temp=*head;
	   for(int i=1;temp !=NULL && i<position-1;i++)
	   {
	    temp=temp->next;
	   }
	     if(temp==NULL)
	     {
	      printf("position out of range.inserting element %d at the end.\n",data);
	      insertEnd(head,data);
	     }
	     else
	      {
		new_node->next=temp->next;
		temp->next=new_node;
		printf("element %d inserted at the position %d.\n",data,position);
	      }
	     }

      // function to display the linked list
	void display(struct Node* head){
	 if(head==NULL){
	   printf("list is empty.\n");
	   return ;
	 }
	  struct Node* temp=head;
	   while(temp!=NULL){
	    printf("%d->",temp->data);
	     temp=temp->next;
	    }
	     printf("NULL\n");
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
	printf("2.Insert at the beginning\n");
	printf("3.Display list\n");
	printf("4.Exit.\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);

	switch(choice)
	{
	 case 1:
	   printf("Enter an element to insert at the end:"):
	   scanf("%d",&value);
	   insertEnd(&head,value)
	   break;
	 case 2:
	   printf("Enter an element to insert at the beginning:");
	   scanf("%d",&value);
	   insertBeginning(&head,value);
	   break;
	 case 3:
	      printf("Enter an element to insert at a specific position:");
	      scanf("%d",&value);
	      printf("Enter the position:"):
	      scanf("%d",&pos):
	      insertAtPosition(&head,value,pos);
	      break;
	 case 7:
	    printf("Linked List:");
	    display(head);
	    break;
	 case 8:
	      printf("Existing the program.\n");
	      break;
	 default:
	    printf("Invalid choice! please try again.\n");
	     }
	    }
             while(choice!=8);
	     getch();
	 }
