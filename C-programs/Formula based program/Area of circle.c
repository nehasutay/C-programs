#include<stdio.h>
#include<conio.h>
void main()
{
    float pi=3.142,area;
    int r;
    printf("Enter radius of circle");
    scanf("%d",&r);
    {
        area=pi*r*r;
    }
    printf("%f",area);
    getch();
}
