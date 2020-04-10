#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,i;
    printf("Enter first number");
    scanf("%d",&num1);
    printf("Enter second number");
    scanf("%d",&num2);

    for(i=num1+1;i<num2;i++)
    {
        if((i%7)==2||(i%7)==3)
        {
            printf("%d\n",i);
        }
    }
    getch();
}
