#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[3],b[3],c[6],i;
    printf("Enter the 1st array elements\n");
  for(i=0;i<=2;i++)
  {
      scanf("%d",&a[i]);

  }
  printf("Enter the 2nd array elements\n");
  for(i=0;i<=2;i++)
  {
      scanf("%d",&b[i]);
  }
  for(i=0;i<=5;i++)
  {
      if(i<=2)
  {
    c[i]=a[i];
  }
  else
  {
      c[i]=b[i-3];
  }
  }
  printf("New array:\n");
  for(i=0;i<=5;i++)
  {
      printf("%d",c[i]);
  }
  getch();
}





