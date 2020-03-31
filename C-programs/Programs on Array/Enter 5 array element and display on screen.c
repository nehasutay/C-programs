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
    for(i=0;i<=4;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
