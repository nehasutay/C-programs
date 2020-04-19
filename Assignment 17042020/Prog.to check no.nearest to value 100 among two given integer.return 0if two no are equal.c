#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
printf("Enter any two numbers");
scanf("%d%d",&num1,&num2);
if(abs(num1-100)<abs(num2-100))
{
    printf("num1 is closer to 100\n");
}
if(abs(num1-100)>abs(num2-100))
{
    printf("num2 is closer to 100\n");
}
if(num1==num2)
{
    return 0;
}
}
