#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i;
  printf("Enter the sequence");
  for(i=0;i<=5;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<5-1;i++)
  {
      if(a[i]==a[i+1]&&a[i+2]==a[i])
      {
          printf("Triple is present in an array");
      }
  }
      getch();
  }
