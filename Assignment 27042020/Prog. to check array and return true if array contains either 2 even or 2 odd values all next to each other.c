#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[100],i,n,even=0,odd=0;
    printf("Enter size of array element");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(i!=0)
    {
        if((a[i]%2==0&&a[i-1]%2==0)||(a[i]%2!=0&&a[i-1]%2!=0))
        {
            printf("True\n");
            break;
        }
    }
  }
  getch();
}
