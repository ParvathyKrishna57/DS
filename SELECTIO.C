#include<stdio.h>
#include<conio.h>

void main()
{
    int a[100], n, i, j, pos, swap;
    clrscr(); // Clear the screen (Turbo C specific)

    // Input: number of elements
    printf("Enter the number of elements\n");
    scanf("%d", &n);

    // Input: array elements
    printf("Enter %d numbers\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Selection sort algorithm
    for(i = 0; i < n - 1; i++)
    {
        pos = i; // Assume current index is the minimum
        for(j = i + 1; j < n; j++)
        {
            if(a[pos] > a[j]) // Find smaller element
                pos = j;
        }

        // Swap if a smaller element was found
        if(pos != i)
        {
            swap = a[i];
            a[i] = a[pos];
            a[pos] = swap;
        }
    }

    // Output: sorted array
    printf("Sorted array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    getch(); // Wait for key press before closing (Turbo C specific)
}
