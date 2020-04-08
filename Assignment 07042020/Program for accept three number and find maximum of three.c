#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter values of num1,num2,num3\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("num1=%d\tnum2=%d\tnum3=%d\n",num1,num2,num3);

    if(num1>num2&&num1>num3)
    {
        printf("num1 is maximum of three");
    }
    else
        if(num2>num1&&num2>num3)
    {
        printf("num2 is maximum of three");
    }
    else
    {
        printf("num3 is maximum of three");
    }
    getch();
}
