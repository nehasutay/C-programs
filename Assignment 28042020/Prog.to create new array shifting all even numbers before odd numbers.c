#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[100],i,n,index=0,temp;
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
          temp=a[index];
          a[index]=a[i];
          a[i]=temp;
          index++;
      }
  }
   for(i=0;i<n-1;i++)
  {
      printf("%d ",a[i]);
  }
  getch();
}


