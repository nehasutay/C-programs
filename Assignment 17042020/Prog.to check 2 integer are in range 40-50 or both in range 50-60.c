#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("Enter two integer");
    scanf("%d%d",&num1,&num2);
    if((num1>=40&&num1<=50&&num2>=40&&num2<=50)||(num1>=50&&num1<=60&&num2>=50&&num2<=60))
    {
        printf("Are in range");
    }
    else
    {
        printf("Not in range");
    }
    getch();
}
