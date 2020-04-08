#include<stdio.h>
#include<conio.h>
void main()
{
    int a[8]={500,100,50,20,10,5,2,1};
    int m,i,n,temp;
    printf("Enter an amount");
    scanf("%d",&m);
    temp=m;
    for(i=0;i<8;i++)
    {
       n=temp/a[i];
       temp=temp%a[i];
    printf("\n%d notes is:%d",a[i],n);
    }
    getch();
}
