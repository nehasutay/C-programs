#include<stdio.h>
#include<conio.h>
void main()
{
    float pi=3.142,v;
    int r;
    printf("Enter radius of circle");
    scanf("%d",&r);
    {
        v=4/3*pi*r*r*r;
    }
    printf("%f",v);
    getch();
}
