#include<stdio.h>
#include<conio.h>
void main()
{
 int a[1007],i,n,j,k;
 clrscr();
 printf("enter the size of the array");
 scanf("%d",&n);
 printf("enter the numbers \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
  for(i=0;i<n;i++)
  {
   k=a[i];
   j=i-1;
   while(j>=0&&a[j]>k)
   {
   a[j+1]=a[j];
   j--;
  }
   a[j+1]=k;
  }
  printf("array after insertion sort is \n");
   for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
    getch();
   }
