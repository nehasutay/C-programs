#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[100],i,n,flag=0;
    printf("Enter size of array element");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      if(a[i]==5)
      {
          if((i>0&&a[i-1]==5)||(i<n-1&&a[i+1]==5))
          {
             flag=1;
            printf("True\n");
            break;
          }
    else if(i==n-1)
      {
          flag=0;
      }
      else
      {
          printf("False");
          break;
      }
  }
  }
  getch();
}
