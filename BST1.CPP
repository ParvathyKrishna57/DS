#include<stdio.h>    // Standard input/output
#include<stdlib.h>   // For malloc()
#include<conio.h>    // For clrscr() and getch()

// Structure for a node in BST
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node in BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);   // Create new node if tree is empty
    }
    if (value < root->data) {
        root->left = insert(root->left, value);   // Insert in left subtree
    } else if (value > root->data) {
        root->right = insert(root->right, value); // Insert in right subtree
    }
    return root;
}

// Function to perform inorder traversal (Left, Root, Right)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);   // Print node data
        inorder(root->right);
    }
}

void main() {
    struct Node* root = NULL;
    int n, value;

    clrscr();   // Clear screen (Turbo C specific)

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insert(root, value);   // Insert each element into BST
    }

    printf("Inorder Traversal: ");
    inorder(root);   // Print elements in sorted order
    printf("\n");

    getch();   // Wait for key press
}

