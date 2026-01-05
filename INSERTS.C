#include<stdio.h>
#include<conio.h>

void main()
{
    int a[1007], i, n, j, k;
    clrscr(); // Clear the screen (Turbo C specific)

    // Input: size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input: array elements
    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Insertion sort algorithm
    for(i = 0; i < n; i++) {
        k = a[i];       // Current element to be inserted
        j = i - 1;      // Index of previous element

        // Shift elements greater than k to the right
        while(j >= 0 && a[j] > k) {
            a[j + 1] = a[j];
            j--;
        }

        // Place k at its correct position
        a[j + 1] = k;
    }

    // Output: sorted array
    printf("Array after insertion sort is:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    getch(); // Wait for key press before closing (Turbo C specific)
}
