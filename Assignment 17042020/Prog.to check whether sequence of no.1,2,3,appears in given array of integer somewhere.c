#include<stdio.h>
#include<conio.h>
void main()
{
  int a[4],i;
  printf("Enter the sequence");
  for(i=0;i<=4;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<5-1;i++)
  {
      if(a[i]==1&&a[i+1]==2&&a[i+2]==3)
      {
         printf("Sequence of numbers 1,2,3 appears in given array");
      }

  }

  getch();
}

