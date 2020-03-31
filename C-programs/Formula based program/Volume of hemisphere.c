#include<stdio.h>
#include<conio.h>
void main()
{
    float pi=3.142,v;
    int r;
    printf("Enter radius of Hemisphere");
    scanf("%d",&r);
    {
        v=2/3*pi*r*r*r;
    }
    printf("%f",v);
    getch();
}
