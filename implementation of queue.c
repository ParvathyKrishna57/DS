#include <stdio.h>

#define MAX 50   // Maximum size of the queue

// Function declarations
void insert();
void delete();
void display();

// Queue variables
int queue_array[MAX];
int rear = -1;   // Index of last element
int front = -1;  // Index of first element

int main()
{
    int choice;
    while (1) // Infinite loop for menu-driven program
    {
        // Menu options
        printf("1. Insert element to queue \n");
        printf("2. Delete element from queue \n");
        printf("3. Display all elements of queue \n");
        printf("4. Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        // Perform operation based on user choice
        switch (choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1); // Exit program
            default:
                printf("Wrong choice \n");
        } /* End of switch */
    } /* End of while */
} /* End of main() */

// Function to insert an element into the queue
void insert()
{
    int add_item;
    if (rear == MAX - 1) {
        // Queue is full
        printf("Queue Overflow \n");
    } else {
        if (front == -1)
            front = 0; // If queue is initially empty, set front to 0

        printf("Insert the element in queue : ");
        scanf("%d", &add_item);

        rear = rear + 1;              // Move rear forward
        queue_array[rear] = add_item; // Insert element
    }
} /* End of insert() */

// Function to delete an element from the queue
void delete()
{
    if (front == -1 || front > rear) {
        // Queue is empty
        printf("Queue Underflow \n");
        return;
    } else {
        // Remove element at front
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1; // Move front forward
    }
} /* End of delete() */

// Function to display all elements of the queue
void display()
{
    int i;
    if (front == -1) {
        // Queue is empty
        printf("Queue is empty \n");
    } else {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]); // Print each element
        printf("\n");
    }
} /* End of display() */
