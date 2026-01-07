#include<stdio.h>   // Standard input/output
#include<conio.h>   // For clrscr() and getch()

// Recursive function to calculate Fibonacci numbers
int fib(int n)
{
    if(n <= 0)       // If n is 0 or negative
        return 0;
    else if(n == 1)  // If n is 1
        return 1;
    else             // Recursive case
        return fib(n-1) + fib(n-2);
}

void main()
{
    int i, n;
    clrscr();        // Clear screen

    printf("enter no: ");
    scanf("%d", &n); // Read input

    // Print Fibonacci series up to n terms
    for(i = 0; i < n; i++)
    {
        printf("%d\t", fib(i));
    }

    getch();         // Wait for key press
}

