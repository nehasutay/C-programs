#include<stdio.h>
#include<conio.h>
void main()
{
    int a[6],i,num;
    printf("Enter 1st number");
    scanf("%d",&num);
    for(i=0;i<=6;i++)
    {
         a[i]=num;
         num=3*num;
    }
    for(i=0;i<=6;i++)
    {
    printf("a[%d]=%d\n",i,a[i]);
    }
    getch();
}
