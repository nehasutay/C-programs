#include<stdio.h>
#include<conio.h>
void main()
{
    int temp1,temp2;
    printf("Enter the 1st temperature");
    scanf("%d",&temp1);
     printf("Enter the 2nd temperature");
    scanf("%d",&temp2);
    if(temp1<0&&temp2>100||temp2<0&&temp1>100)
    {
        printf("Temperature is less than zero",temp1);
    }
    else
    {
        printf("Temperature is greater than 100",temp2);
    }
    getch();
}
