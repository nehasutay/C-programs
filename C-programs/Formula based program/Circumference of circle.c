#include<stdio.h>
#include<conio.h>
void main()
{
    float pi=3.142,circum;
    int r,d;
    printf("Enter radius of circle");
    scanf("%d",&r);
    printf("Enter diameter of circle");
    scanf("%d",&d);
    {
        circum=2*r*(pi*d);
    }
    printf("%f",circum);
    getch();
}
