#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i;
    printf("Enter 5 array element from keyboard");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=4;i++)
    {
        if(a[i]<a[0])
        a[0]=a[i];

    }
    printf("Smallest number %d",a[0]);

    getch();
}
