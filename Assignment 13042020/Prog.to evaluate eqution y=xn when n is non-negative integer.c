#include<stdio.h>
#include<conio.h>
void main()
{
    int n,count;
    float x,y;
    printf("Enter values of x and y");
    scanf("%f%d",&x,&n);
    y=1.0;
    count=1;
    while(count<=n)
    {
        y=y*x;
        count++;
    }
    printf("%f to power %d=%f",x,n,y);
    getch();
}
