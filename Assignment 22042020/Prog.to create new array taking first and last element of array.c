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
  printf("First element:%d\n",a[0]);
  printf("Last element:%d\n",a[n]);
  getch();
}
