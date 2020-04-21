#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
printf("Enter two integer x & y");
scanf("%d%d",&x,&y);
if(x==y)
{
    printf("False");
}
else if(x%5==y%5&&x<y)
{
printf("smaller integer");
}
else
{
    printf("greater integer");
}
getch();
}
