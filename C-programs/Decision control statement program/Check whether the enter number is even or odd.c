#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem;
    printf("Enter number from keyboard");
    scanf("%d",&num);
    rem=num%2;
    if(rem==0)
    {
        printf("Number is Even");
    }
   else
    {
         printf("Number is Odd");
    }
    getch();
    }
