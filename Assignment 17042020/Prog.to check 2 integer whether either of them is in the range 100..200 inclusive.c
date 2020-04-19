#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
printf("Enter two integer");
scanf("%d%d",&num1,&num2);
if((num1>=100&&num1<=200)||(num2>=100&&num2<=200))
{
    printf("Given integer is in the range 100..200");
}
else
{
    printf("Not in range 100..200");
}
getch();

}
