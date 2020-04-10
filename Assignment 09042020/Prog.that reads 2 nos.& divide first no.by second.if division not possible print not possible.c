#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    float div;
    printf("Enter first number");
    scanf("%d",&num1);
    printf("Enter second number");
    scanf("%d",&num2);
    if(num2!=0)
    {
        div=num1/num2;
        printf("%.1f",div);
    }
    else
    {
        printf("Division not possible");
    }
    getch();
}
