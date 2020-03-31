#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],ser,i;
    printf("Enter 5 array element from keyboard");
    for(i=0;i<=4;i++)
    {
        scanf("%d",a[i]);
    }
    printf("Enter the number u want search");
    scanf("%d",ser);
    for(i=0;i<=4;i++)
    {
        if(a[i]==ser)
        {
            printf("Number present");
        }
        else
        {
            printf("Number not present");
        }
    }
    getch();
}

