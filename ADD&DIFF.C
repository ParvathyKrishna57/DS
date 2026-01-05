#include<stdio.h>
#include<conio.h>

void main()
{
  // Declare variables
  int n, m;                     // Dimensions of the matrices (rows = n, columns = m)
  int a[20][20], b[20][20], c[20][20]; // Matrices: a, b, and result matrix c
  int i, j;                     // Loop counters

  clrscr(); // Clear the screen (works in Turbo C, not modern compilers)

  // Input matrix dimensions
  printf("Enter value for n (rows): \n");
  scanf("%d", &n);
  printf("Enter value for m (columns): \n");
  scanf("%d", &m);

  // Input elements of first matrix
  printf("Enter first array elements:\n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  // Input elements of second matrix
  printf("Enter the second array elements:\n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }

  // Display the first matrix
  printf("The 1st matrix:\n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }

  // Display the second matrix
  printf("The 2nd matrix:\n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      printf("%d\t", b[i][j]);
    }
    printf("\n");
  }

  // Matrix addition: c = a + b
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
    }
  }

  // Display result of addition
  printf("\nMatrix after addition:\n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }

  // Matrix subtraction: c = a - b
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      c[i][j] = a[i][j] - b[i][j];
    }
  }

  // Display result of subtraction
  printf("\nMatrix after subtraction:\n");
  for(i = 0; i < n; i++)   // Fixed typo here
  {
    for(j = 0; j < m; j++)
    {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }

  getch(); // Wait for a key press before closing (Turbo C specific)
}
