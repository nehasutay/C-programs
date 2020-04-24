#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[3],b[3],i,sum1=0,sum2=0;
  printf("Enter the 1st array elements");
  for(i=0;i<=2;i++)
  {
      scanf("%d",&a[i]);
  }
  sum1=a[0]+a[1]+a[2];
       printf("sum:%d\n",sum1);

  printf("Enter the 2nd array elements");
  for(i=0;i<=2;i++)
  {
      scanf("%d",&b[i]);
  }
 sum2=b[0]+b[1]+b[2];
printf("sum:%d\n",sum2);

  if(sum1>=sum2)
  {
      printf("Largest sum:%d\n",sum1);
  }
  else
  {
    printf("Largest sum:%d\n",sum2);
  }
  getch();
}


