#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,fact=1;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
            printf("%d",fact);
getch();
}
