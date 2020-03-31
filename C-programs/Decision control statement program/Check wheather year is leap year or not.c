#include<stdio.h>
#include<conio.h>
void main()
{
    int year,leap;
    printf("Enter year from keyboard");
    scanf("%d",&year);
    leap=year%4;
    if(leap==0)
    {
        printf("Year is leap year");
    }
    else
    {
        printf("Year is not leap year");
    }
    getch();
}
