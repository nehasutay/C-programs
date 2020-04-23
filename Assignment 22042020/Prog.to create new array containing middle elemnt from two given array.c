#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[100],b[100],i,j,n1,n2,mid1,mid2;
    printf("Enter size of element of first array\n");
    scanf("%d",&n1);
    printf("Enter elements of array\n");
    for(i=0;i<=n1;i++)
  {
      scanf("%d",&a[i]);
  }
    mid1=a[n1/2];
    printf("Middle element:%d\n",mid1);
  printf("Enter size of element of second array\n");
    scanf("%d",&n2);
    printf("Enter elements of array\n");
    for(i=0;i<=n2;i++)
  {
      scanf("%d",&b[i]);
  }
  mid2=b[n2/2];
  printf("Middle element:%d",mid2);
  getch();
}
