#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],n,i,j,pos,swap;
 clrscr();
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter %d number\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
      pos=i;
      for(j=i+1;j<n;j++)
      {
	if(a[pos]>a[j])
	pos=j;
      }
       if(pos!=i)
       {
	 swap=a[i];
	 a[i]=a[pos];
	 a[pos]=swap;
       }
      }
       printf("sorted array is \n");
       for(i=0;i<n;i++)
       {
	printf("%d\t",a[i]);
       }
       getch();
    }

