#include<stdio.h>
#include<conio.h>
void main()
{
    int b,h,area;
    printf("Enter base of triangle");
    scanf("%d",&b);
    printf("Enter height of triangle");
    scanf("%d",&h);
    {
        area=1/2*(b*h);
    }
    printf("%d",area);
    getch();
}
