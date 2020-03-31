#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,*p1,*p2,temp;
    p1=&a;
    p2=&b;
    printf("Enter value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d\nb=%d\n",a,b);
    temp=*p2;
    *p2=*p1;
    *p1=temp;
    printf("After swapping a=%d\nb=%d\n",a,b);
    getch();
}


