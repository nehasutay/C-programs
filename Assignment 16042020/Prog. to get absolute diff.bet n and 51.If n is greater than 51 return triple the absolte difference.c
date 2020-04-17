#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  const int x=51;
  printf("Enter the value of n");
  scanf("%d",&n);
  if(n>x)
  {
       printf("Absolute difference is %d\n",(n-x)*3);
  }
  else
  {
      printf("Difference is=%d\n",(x-n));
  }
getch();
}
