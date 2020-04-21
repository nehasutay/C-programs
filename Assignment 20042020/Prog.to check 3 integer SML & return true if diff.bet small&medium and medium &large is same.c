#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    printf("Enter three integer small,medium and large");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z&&y>z)
    {
        printf("%d==%d",x-y==y-z);
    }
    if(x>y&&x>z&&z>y)
    {
        printf("%d==%d",x-z==z-y);
    }
    if(y>x&&y>z&&x>z)
    {
        printf("%d==%d",y-x==x-z);
    }
    if(y>x&&y>z&&z>x)
    {
        printf("%d==%d",y-z==z-x);
    }
    if(z>x&&z>y&&x>y)
    {
        printf("%d==%d",z-x==x-y);
    }
    printf("%d==%d",z-y==y-x);

    getch();
}
