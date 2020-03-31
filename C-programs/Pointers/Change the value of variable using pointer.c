#include<stdio.h>
#include<conio.h>
void main()
{
    int a=2,*p1;
    p1=&a;
    printf("Before a=%d\n",a);
    *p1=24;
    printf("After a=%d\n",a);
    getch();
}

