#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("Enter two integer");
    scanf("%d%d",&num1,&num2);
    if(num1==5||num2==5||(num1+num2)==5||abs(num1-num2)==5)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
getch();
}
