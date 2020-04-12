#include<stdio.h>
#include<conio.h>
void main()
{
    int a[6],i;
    printf("Enter 6 array elements");
    for(i=0;i<=6;i++)
    {
         scanf("%d",&a[i]);
        if(a[i]>0)
        {
            a[i]=a[i];
        }
        else
        {
            a[i]=100;
        }
    }
    for(i=0;i<=6;i++)
    {
        printf("a[%d]=%d\n",i.a[i]);
    }
    getch();
}
