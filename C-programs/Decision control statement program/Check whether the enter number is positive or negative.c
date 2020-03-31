#include<stdio.h>
#include<conio.h>
void main()
{
    int num,num1;
    printf("Enter number from keyboard");
    scanf("%d",&num);
    num1=0-num;
    if(num>num1)
    {
        printf("Number is Positive");
    }
   else
    {
         printf("Number is Negative");
    }
    getch();
    }
