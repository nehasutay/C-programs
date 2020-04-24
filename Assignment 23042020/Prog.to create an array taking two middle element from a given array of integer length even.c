#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int a[100],i,n,mid;
    printf("Enter size of array element\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  if(n%2==0)
  {
      mid=n/2;
      printf("Middle elements are:%d, %d",a[mid-1],a[mid]);
  }
  else
  {
      printf("Please enter even no.of integer\n");
  }


  getch();
}
