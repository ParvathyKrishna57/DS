#include<stdio.h>
#include<conio.h>

void main()
{
    // Declare matrices and variables
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2; // Rows and columns for matrices
    int i, j, k;

    clrscr(); // Clear screen (Turbo C specific)

    // Input dimensions for first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d%d", &r1, &c1);

    // Input dimensions for second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d%d", &r2, &c2);

    // Check if multiplication is possible (columns of first = rows of second)
    if (c1 != r2) {
        printf("Matrix multiplication is not possible\n");
        return;
    }

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {   // corrected loop to use c2 instead of c1
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply matrices: result = a × b
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0; // Initialize result cell
            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output the resultant matrix
    printf("Resultant matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    getch(); // Wait for key press before closing (Turbo C specific)
}
