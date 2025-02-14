#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],b[10][10],result[10][10],r1,c1,r2,c2,i,j,k;
 clrscr();
 printf("enter rows and column for the first matrix:");
 scanf("%d%d",&r1,&c1);
 printf("enter rows and column for the second matrix:");
 scanf("%d%d",&r2,&c2);
 if(c1!=r2)
 {
   printf("matrix multiplication is not possible");
   return;
 }
  printf("enter elements of the first matrix");
   for(i=0;i<r1;i++)
   {
    for(j=0;j<c1;j++)
    {
     scanf("%d",&a[i][j]);
     }
    }
    printf("enter elements pf the second matrix");
      for(i=0;i<r2;i++)
      {
       for(j=0;j<c1;j++)
       {
	scanf("%d",&b[i][j]);
       }
      }
      //multiply matrices
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c2;j++)
       {
	result[i][j]=0;
	for(k=0;k<c1;k++)
	{
	 result[i][j]+=a[i][k]*b[k][j];
	}
       }
      }
       printf("resultant matrix:\n");
       for(i=0;i<r1;i++)
       {
	for(j=0;j<c2;j++)
	{
	 printf("%d\t",result[i][j]);
	}
	printf("\n");
       }
	getch();
       }

