#include<stdio.h>
#include<conio.h>
void main()
{
    float pi=3.142,v;
    int r,h;
    printf("Enter radius of cylinder");
    scanf("%d",&r);
    printf("Enter height of cylinder");
    scanf("%d",&h);
    {
        v=pi*r*r*h;
    }
    printf("%f",v);
    getch();
}
