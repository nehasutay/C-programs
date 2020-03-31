#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,sw;
    printf("Enter two no.from keyboard");
    scanf("%d%d",&num1,&num2);
    {
        sw=num1;
        num1=num2;
        num2=sw;
    }
    printf("After swapping");
    printf("num1=%d num2=%d\n",num1,num2);
    getch();
}
