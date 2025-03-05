#include<stdio.h>
#include<conio.h>
int multiplynumbers(int n);
void main()
{
  int n;
  clrscr();
  printf("enter a positive integer:");
  scanf("%d",&n);
  printf("factorial of %d=%d",n,multiplynumbers(n));
  getch();
}
  int multiplynumbers(int n)
  {
    if(n>=1)
     return n*multiplynumbers(n-1);
    else
     return 1;

  }