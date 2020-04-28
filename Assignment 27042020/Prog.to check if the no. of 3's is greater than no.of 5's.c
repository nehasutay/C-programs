#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[100],i,n,ctr3=0,ctr5=0;
    printf("Enter size of array element");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      if (a[i]==3)
      {
        ctr3++;
      }
      if(a[i]==5)
      {
          ctr5++;
      }
  }
      if(ctr3>ctr5)
      {
        printf("Number of 3's is greater than number of 5's");
      }

  getch();
}
