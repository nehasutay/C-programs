#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[100],b[100],i,j,d,n;
    printf("Enter size of array element");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<=9;i++)
  {
      if(a[i]==5)
      {

          for(j=i;j>=0;j--)
          {
              b[j]=a[j];
          }
          break;
      }
  }
   for(d=0;d<=i;d++)
  {
      printf("%d",b[d]);
  }
  getch();
}
