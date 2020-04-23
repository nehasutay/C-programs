#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[100],b[100],i,j,n1,n2;
    printf("Enter size of element of first array\n");
    scanf("%d",&n1);
    printf("Enter elements of array\n");
    for(i=0;i<=n1;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("Enter size of element of second array\n");
    scanf("%d",&n2);
    printf("Enter elements of array\n");
    for(i=0;i<=n2;i++)
  {
      scanf("%d",&b[i]);
  }
  if(a[0]==b[0]||a[n1]==b[n2])
  {
      printf("Either it has first element same or last element same");
  }
  getch();
}

