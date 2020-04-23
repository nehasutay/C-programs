#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int a[100],i,n;
  printf("Enter the size of array element");
  scanf("%d",&n);
  printf("Enter the array elements");
  for(i=0;i<=n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("Array element after rotating are\n");
  for(i=1;i<=n;i++)
  {
      printf("%d\t",a[i]);
  }
  printf("%d",a[0]);
getch();
}

