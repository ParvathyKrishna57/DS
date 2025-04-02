#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//structure for a nodein BST
  struct Node{
  int data;
  struct Node* left;
  struct Node* right;
  };
 //function to create a new node
   struct Node* createNode(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data= value;
    newNode->left=NULL;
    newNode->right=NULL;
   return newNode;
  }
   //function to insert a node in BST
   struct Node* insert(struct Node* root, int value) {
    if (root== NULL){
     return createNode(value);
    }
     if(value < root->data) {
      root ->left =insert(root->left,value);
     } else if(value > root->data) {
       root->right = insert(root->right,value);
    }
     return root;
  }

   //function to perform inorder traversal(Left, Root, Right)
   void inorder(struct Node* root){
    if(root !=NULL) {
     inorder(root->left);
      printf("%d",root->data);
       inorder(root->right);
      }

void main()
     {
     struct Node* root= NULL;
     int n,value;
     clrscr();
     printf("Enter the number of elements :");
      scanf("%d",&n);

     printf("Enter %d elements:"n);
      for (int i=0;i<n;i++) {
	scanf("%d",& value);
	 root= insert(root,value);
	}
     printf("Inorder Traversal:");
       inorder(root);
	 printf("\n");
     getch();


 };
 }