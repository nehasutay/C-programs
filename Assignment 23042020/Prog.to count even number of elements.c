#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int a[100],i,n,count=0;
    printf("Enter size of array element");
    scanf("%d",&n);
    printf("Enter the array elements");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      if(a[i]%2==0)
      {
          count++;
      }
  }
  printf("Total number of even numbers in array=%d",count);
}
