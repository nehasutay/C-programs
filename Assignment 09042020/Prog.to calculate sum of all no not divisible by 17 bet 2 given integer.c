#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,temp,i,sum=0;
    printf("Enter first number");
    scanf("%d",&num1);
    printf("Enter second number");
    scanf("%d",&num2);

    for(i=num1;i<=num2;i++)
    {
        if((i%17)!=0)
    {
            sum=sum+i;
    }
    }
    printf("Sum:%d\n",sum);
    getch();
}
