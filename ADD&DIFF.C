#include<stdio.h>
#include<conio.h>
void main()
{
  int n,m,a[20][20],b[20][20],c[20][20],i,j;
  clrscr();
  printf("enter value for n \n");
  scanf("%d",&n);
  printf("enter value for m \n");
  scanf("%d",&m);
  printf("enter first array elements\n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
    {
     scanf("%d",&a[i][j]);
    }
   }
    printf("enter the second array elements \n");
    for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
     {
      scanf("%d",&b[i][j]);
     }
    }
     printf("the 1st matrix \n");
     for(i=0;i<n;i++)
     {
      for(j=0;j<m;j++)
      {
	printf("%d\t",a[i][j]);
      }
	printf("\n");
     }
     printf("the 2nd matrix \n");
     for(i=0;i<n;i++)
      {
	for(j=0;j<m;j++)
	{
	 printf("%d\t",b[i][j]);
	}
	 printf("\n");
      }
      for(i=0;i<n;i++)
      {
       for(j=0;j<m;j++)
       {
	c[i][j]=a[i][j]+b[i][j];
       }
      }
       printf("\n matrix after addition \n");
       for(i=0;i<n;i++)
       {
	for(j=0;j<m;j++)
	 {
	  printf("%d\t",c[i][j]);
	 }
	  printf("\n");
	 }
	 for(i=0;i<n;i++)
	 {
	  for(j=0;j<m;j++)
	  {
	  c[i][j]=a[i][j]-b[i][j];
	  }
	 }
	  printf("\n matrix after substraction\n");
	  for(i=0;<n;i++)
	  {
	   for(j=0;j<m;j++)
	   {
	   printf("%d\t",c[i][j]);
	   }
	   printf("\n");
	  }
	  getch();
	 }
