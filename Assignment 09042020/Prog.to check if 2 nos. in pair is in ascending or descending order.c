#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("Input first number of the pair:");
    scanf("%d",&num1);
    printf("Input second number of the pair");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("Pair is in decsending order");
    }
    else
    {
        printf("Pair is in ascending order");
    }
    getch();
}
