#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[4],i;
    printf("Enter 5 array element\n");
    for(i=0;i<=4;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("\n");
  printf("Array in reverse order");
  for(i=4-1;i>=0;i--)
  {
      printf("%d",a[i]);
  }
  getch();
}
