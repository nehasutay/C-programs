#include<stdio.h>
#include<conio.h>
void main()
{
  int a[4],i,ctr=0;
  printf("Enter the array of integer");
  for(i=0;i<=4;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<5-1;i++)
  {
      if(a[i]==5&&(a[i+1]==5||a[i+1]==6))
        ctr++;
}
  getch();
}
