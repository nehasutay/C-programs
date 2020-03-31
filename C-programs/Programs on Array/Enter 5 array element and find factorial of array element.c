#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j,f;
printf("Enter 5 array element");
for(i=0;i<=4;i++)
{
    scanf("%d",&a[i]);
}
f=1;
for(i=0;i<=4;i++)
{
    for(j=1;j<=a[i];j++)
    {
        f=f*j;
    }
    printf("%d",f);
    f=1;
}
}
