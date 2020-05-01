#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[100],i,n,pos=0;
    printf("Enter size of array element");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      if(a[i]==0)
      {
          a[i]=a[pos];
          a[pos++]=0;
      }
  }
   for(i=0;i<n-1;i++)
  {
      printf("%d ",a[i]);
  }
  getch();
}
