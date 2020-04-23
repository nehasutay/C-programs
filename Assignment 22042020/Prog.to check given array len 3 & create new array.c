#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[3],b[3],i;
    printf("Enter three values\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<3;i++)
{
    if(a[i]==7&&a[i-1]==5)
    {
        a[i]=1;
    }
}
printf("Now the array is:");
for(i=0;i<3;i++)
{
    printf("%d",a[i]);
}
getch();
}
