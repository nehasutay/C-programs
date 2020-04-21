#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter three integer");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1==num2+num3||num2==num1+num3||num3==num1+num2)
    {
        printf("Yes it is possible");
    }
    getch();
}

