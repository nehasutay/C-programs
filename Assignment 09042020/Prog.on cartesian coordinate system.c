#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    printf("Enter first coordinate x:");
    scanf("%d",&x);
    printf("Enter second coordinate y:");
    scanf("%d",&y);
    if(x>0&&y>0)
    {
        printf("It belongs to Quadrant-I");
    }
    else if(x>0&&y<0)
    {
        printf("It belongs to Quadrant-II");
    }
    else if(x<0&&y>0)
    {
        printf("It belongs to Quadrant-III");
    }
    else
    {
        printf("It belongs to Quadrant-IV");
    }
    getch();
}
