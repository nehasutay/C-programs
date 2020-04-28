#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[100],i,n;
    printf("Enter size of array element");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
   for(i=0;i<n;i++)
  {
      if (a[i]==5&&a[i]==a[i+1])
      {
        printf("Array of integer contains 5 next to 5");
      }
  }
  getch();
}
