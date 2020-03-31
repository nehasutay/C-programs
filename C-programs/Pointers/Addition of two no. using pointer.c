#include<stdio.h>
#include<conio.h>
void main()
{
    int a=2,b,*p1,*p2;
    p1=&a;
    p2=&b;
    printf("value of a is %d\n",a);
    printf("Enter value of b");
    scanf("%d",&b);
    *p1=*p1+*p2;
    printf("sum=%d",a);
    getch();
}



