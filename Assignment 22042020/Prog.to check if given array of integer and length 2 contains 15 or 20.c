#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[1],i;
    printf("Enter the array elements");
  for(i=0;i<=1;i++)
  {
      scanf("%d",&a[i]);
  }
  if(a[0]==15||a[0]==20&&a[1]==15||a[1]==20)
  {
      printf("Given array contains 15 or 20");
  }
  else
  {
      printf("Given array element does not contain 15 or 20");
  }
  getch();
}
