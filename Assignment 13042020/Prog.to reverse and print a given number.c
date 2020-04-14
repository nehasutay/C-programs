#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n1,rev=0;
    printf("Enter an integer");
    scanf("%d",&num);
    while(num!=0)
    {
    n1=num%10;
    rev=rev*10+n1;
    num=num/10;
     }

    printf("Reversed number=%d",rev);
    getch();
}
