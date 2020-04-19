#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("Enter two non-negative integer");
    scanf("%d%d",&num1,&num2);
    if(abs(num1%10)==abs(num2%10))
    {
        printf("Num1 & Num2 have same last digit");
    }
    else
    {
        printf("Not same");
    }
    getch();
}
