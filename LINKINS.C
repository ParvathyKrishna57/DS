#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// Define a node structure for the linked list
struct node {
    int data;              // Data part of the node
    struct node* next;     // Pointer to the next node
};

// Function to insert a new node at the end of the list
void insertEnd(struct node** head, int data) {
    // Allocate memory for new node
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    // If list is empty, new node becomes the head
    if (*head == NULL) {
        *head = new_node;
    } else {
        // Traverse to the last node
        struct node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        // Link new node at the end
        temp->next = new_node;
    }
    printf("Element %d inserted at the end.\n", data);
}

// Function to insert a new node at the beginning of the list
void insertBeginning(struct node** head, int data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head;   // New node points to current head
    *head = new_node;         // Head updated to new node
    printf("Element %d inserted at the beginning.\n", data);
}

// Function to insert a new node at a specific position
void insertAtPosition(struct node** head, int data, int position) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;

    // If inserting at position 1, treat as beginning
    if (position == 1) {
        new_node->next = *head;
        *head = new_node;
        printf("Element %d inserted at position %d.\n", data, position);
        return;
    }

    // Traverse to the node before the desired position
    struct node* temp = *head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    // If position is out of range, insert at the end
    if (temp == NULL) {
        printf("Position out of range. Inserting element %d at the end.\n", data);
        insertEnd(head, data);
    } else {
        // Insert new node at the given position
        new_node->next = temp->next;
        temp->next = new_node;
        printf("Element %d inserted at position %d.\n", data, position);
    }
}

// Function to display the linked list
void display(struct node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data); // Print data of each node
        temp = temp->next;
    }
    printf("NULL\n"); // End of list
}

void main() {
    struct node* head = NULL; // Initialize empty list
    int choice, value, pos;
    clrscr(); // Clear screen (Turbo C specific)

    // Menu-driven program
    do {
        printf("\nMenu:\n");
        printf("1. Insert at the end\n");
        printf("2. Insert at the beginning\n");
        printf("3. Insert at a specific position\n");
        printf("4. Display list\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter an element to insert at the end: ");
                scanf("%d", &value);
                insertEnd(&head, value);
                break;
            case 2:
                printf("Enter an element to insert at the beginning: ");
                scanf("%d", &value);
                insertBeginning(&head, value);
                break;
            case 3:
                printf("Enter an element to insert: ");
                scanf("%d", &value);
                printf("Enter the position: ");
                scanf("%d", &pos);
                insertAtPosition(&head, value, pos);
                break;
            case 4:
                printf("Linked List: ");
                display(head);
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    getch(); // Wait for key press before closing (Turbo C specific)
}
