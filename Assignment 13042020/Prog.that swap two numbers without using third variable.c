#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("Enter number from keyboard",num1,num2);
    scanf("%d%d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("After swapping num1=%d num2=%d",num1,num2);
    getch();
}
