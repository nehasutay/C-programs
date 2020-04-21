#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    printf("Enter three integer x,y,z");
    scanf("%d%d%d",&x,&y,&z);
    if(y>x&&z>y)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    getch();
}

