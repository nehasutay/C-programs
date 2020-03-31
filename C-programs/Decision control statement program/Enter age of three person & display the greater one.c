#include<stdio.h>
#include<conio.h>
void main()
{
    int p1,p2,p3;
    printf("Enter age of three person");
    scanf("%d%d%d",&p1,&p2,&p3);
    if(p1>p2&&p1>p3)
    {
        printf("p1 is greater one");
    }
    else
        if(p2>p1&&p2>p3)
    {
        printf("p2 is greater one");
    }
    else
    {
        printf("p3 is greater one");
    }
    getch();
}


