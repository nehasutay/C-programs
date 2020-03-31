#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i;
    printf("Enter the array elements from keyboard");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Even no.in array are \n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
    {
        printf("%d",a[i]);
    }
    }
    printf("\n Odd no.in array are \n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
    {
        printf("%d",a[i]);
    }
    }
    getch();
}
