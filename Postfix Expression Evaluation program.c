#include<stdio.h>    // Standard input/output
#include<conio.h>    // For clrscr() and getch()
#include<ctype.h>    // For isdigit() function

int stack[20];       // Stack array
int top = -1;        // Stack top pointer

// Push an element onto the stack
void push(int x)
{
    stack[++top] = x;
}

// Pop an element from the stack
int pop()
{
    return stack[top--];
}

void main()
{
    char exp[20];    // Expression input
    char *e;         // Pointer to traverse expression
    int n1, n2, n3, num;

    printf("Enter the expression :: ");
    scanf("%s", exp);   // Read postfix expression
    e = exp;

    // Traverse each character in the expression
    while(*e != '\0')
    {
        if(isdigit(*e))   // If character is a digit
        {
            num = *e - 48;   // Convert char to int
            push(num);       // Push onto stack
        }
        else               // If character is an operator
        {
            n1 = pop();     // Pop first operand
            n2 = pop();     // Pop second operand

            // Perform operation based on operator
            switch(*e)
            {
                case '+':
                    n3 = n1 + n2;
                    break;
                case '-':
                    n3 = n2 - n1;
                    break;
                case '*':
                    n3 = n1 * n2;
                    break;
                case '/':
                    n3 = n2 / n1;
                    break;
            }
            push(n3);       // Push result back to stack
        }
        e++;   // Move to next character
    }

    // Final result will be at top of stack
    printf("\nThe result of expression %s  =  %d\n\n", exp, pop());

    getch();   // Wait for key press
}
