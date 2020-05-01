#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[100],i,n,temp;
    printf("Enter size of array element");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("Original array element\n");
  for(i=0;i<n;i++)
  {
      printf("%d\n",a[i]);
  }
  temp=a[0];
  for(i=0;i<n-1;i++)
  {
     a[i]=a[i+1];
  }
  a[n-1]=temp;
  printf("New array after shifting element in left direction\n");
  for(i=0;i<n;i++)
  {
      printf("%d\n",a[i]);
  }
  getch();
}

