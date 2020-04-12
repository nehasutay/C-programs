#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,j,small,pos=0;
    printf("Enter 6 array elements");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(j=1;j<=5;j++)
        {
        if(small>a[j])
    {
        small=a[j];
        pos=j;
    }
        }
        printf("Smallest element:%d\n",small);
        printf("Position of the element:%d\n",pos);
        getch();
}
