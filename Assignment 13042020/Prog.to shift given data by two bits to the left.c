#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
printf("Enter the number from keyboard");
scanf("%d",&num1);
num1<<=3;
num2=num1;
printf("The left shifted data is=%d",num2);
getch();
}
