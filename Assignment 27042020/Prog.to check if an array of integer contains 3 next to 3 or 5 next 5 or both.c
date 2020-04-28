#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[100],i,n,flag1=0,flag2=0;
    printf("Enter size of array element");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      if (a[i]==3&&a[i+1]==3)
      {
        flag1=1;
        printf("Array of integer contains 3 next to 3\n");
      }
      else
      {
          flag1=0;
      }
      if (a[i]==5&&a[i+1]==5)
      {
        flag2=1;
        printf("Array of integer contains 5 next to 5\n");
      }
      else
      {
          flag2=0;
      }
}
  getch();
}

