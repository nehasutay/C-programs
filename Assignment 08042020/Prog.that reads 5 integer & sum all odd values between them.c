#include<stdio.h>
#include<conio.h>
void main()
{
    int a[4];
    int i,j,sum=0;
    printf("Enter 5 numbers");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<=4;j++)
    {
        if((a[j]%2)!=0)
    {
        sum=sum+a[j];
    }
    }
     printf("Sum of all odd values:%d\n",sum);
     getch();
}
