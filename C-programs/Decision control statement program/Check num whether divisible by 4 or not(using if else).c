#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem;
    printf("Enter number from keyboard");
    scanf("%d",&num);
    rem=num%4;
    if(rem==0)
    {
        printf("Number is divisible by 4");
    }
   else
    {
         printf("Number is not divisible by 4");
    }
    getch();
    }
