#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter a value");
    scanf("%d",&num);
    if((abs(1000-num)<=100)||(abs(2000-num)<=100))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    getch();
}
