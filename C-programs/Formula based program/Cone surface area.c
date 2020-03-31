#include<stdio.h>
#include<conio.h>
void main()
{
    float pi=3.142,area;
    int s,r;
    printf("Enter radius of circle");
    scanf("%d",&r);
    printf("Enter value of surface");
    scanf("%d",&s);
    {
        area=(pi*r*s)+(pi*r*r);
    }
    printf("%f",area);
    getch();
}
