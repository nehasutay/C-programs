#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("Enter the first integer:");
    scanf("%d",&num1);
    printf("Enter the second integer");
    scanf("%d",&num2);
    if(num1%num2==0)
    {
        printf("\n%d is multiple of %d\n",num1,num2);
    }
    else
    {
        printf("\n%d is not multiple of %d\n",num1,num2);
    }
    getch();
}
