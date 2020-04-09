#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,temp;
    printf("Enter first number");
    scanf("%d",&num1);
    printf("Enter second number");
    scanf("%d",&num2);
    if(num1>num2)
    {
        temp=num1;
        num1=num2;
        num2=temp;
    }
    if((num2%num1)==0)
    {
        printf("Multiplied\n");
    }
    else
    {
        printf("Not Multiplied");
    }
    getch();
}

