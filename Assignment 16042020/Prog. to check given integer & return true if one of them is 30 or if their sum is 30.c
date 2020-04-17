#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("Enter 1st integer");
    scanf("%d",&num1);
    printf("Enter 2nd integer");
    scanf("%d",&num2);
    if(num1==30||num2==30||(num1+num2==30))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
getch();
}
