#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10], i, n, pos;

    // Input: size of the array
    printf("Enter the limit\n");
    scanf("%d", &n);

    // Input: array elements
    printf("Enter the elements\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Display the given array
    printf("The given array elements:\n");
    for(i = 0; i < n; i++)
        printf("a[%d] = %d\t", i, a[i]);

    // Input: position of the element to be deleted
    printf("\nEnter the position of the element to be deleted: ");
    scanf("%d", &pos);

    // Check if deletion is possible
    if(pos >= n + 1)
        printf("Deletion is not possible in this array\n");
    else
    {
        // Shift elements to the left to overwrite the deleted element
        for(i = pos - 1; i < n - 1; i++)
            a[i] = a[i + 1];

        // Display the resultant array after deletion
        printf("The resultant array is:\n");
        for(i = 0; i < n - 1; i++)   // corrected loop condition
            printf("a[%d] = %d\t", i, a[i]);
    }

    getch(); // Wait for key press before closing (Turbo C specific)
}
