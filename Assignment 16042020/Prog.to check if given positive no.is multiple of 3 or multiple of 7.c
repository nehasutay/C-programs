#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("Enter the number");
scanf("%d",&num);
if(num%3==0||num%7==0)
{
    printf("Positive number multiple of 3 or 7");
}
else
{
    printf("Positive number is not multiple of 3 or 7");
}
getch();
}
