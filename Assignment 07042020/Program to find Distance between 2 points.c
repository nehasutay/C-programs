#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int x1,x2,y1,y2;
    int x,y;
    float distance;
    printf("Enter x and y coordinates of first point");
    scanf("%d%d",&x1,&y1);
    printf("Enter x and y coordinates of second point");
    scanf("%d%d",&x2,&y2);
    x=x2-x1;
    y=y2-y1;
    distance=sqrt((x*x)+(y*y));
    printf("Distance:%f",distance);
    getch();
}
