#include<stdio.h>   // Standard input/output
#include<conio.h>   // For clrscr() and getch()

// Function to calculate factorial using recursion
int multiplynumbers(int n);

void main()
{
  int n;            
  clrscr();         // Clear screen

  printf("enter a positive integer:");
  scanf("%d",&n);   // Read input

  // Print factorial result
  printf("factorial of %d=%d", n, multiplynumbers(n));

  getch();          // Wait for key press
}

// Recursive function definition
int multiplynumbers(int n)
{
    if(n >= 1)      
        return n * multiplynumbers(n - 1); // Recursive step
    else
        return 1;   // Base case (factorial of 0 = 1)
}

