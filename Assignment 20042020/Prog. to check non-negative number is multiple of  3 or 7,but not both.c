#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter non-negative number");
    scanf("%d",&num);
    if(num%3==0^num%7==0)
    {
        printf("Multiple of 3 or 7 but not both");
    }
    getch();
}
