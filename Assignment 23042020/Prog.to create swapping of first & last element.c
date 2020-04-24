#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[100],i,n,temp=0;
    printf("Enter size of array element");
    scanf("%d",&n);
    printf("Enter the array elements");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  temp=a[0];
  a[0]=a[n-1];
  a[n-1]=temp;
  printf("After swapping first & last element\n");
  for(i=0;i<n;i++)
  {
      printf("%d\t",a[i]);
  }
  getch();
}

