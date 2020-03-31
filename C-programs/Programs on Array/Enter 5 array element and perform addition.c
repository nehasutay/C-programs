#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5];
    int i,n,sum=0;
    printf("Enter 5 elements in array");
   for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<=4;i++)
{
    sum=sum+a[i];
}
printf("sum of array is %d",sum);
getch();
}
