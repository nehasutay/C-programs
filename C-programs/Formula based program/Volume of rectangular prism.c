#include<stdio.h>
#include<conio.h>
void main()
{
    int v,l,h,d;
    printf("Enter value of length");
    scanf("%d",&l);
    printf("Enter value of height");
    scanf("%d",&h);
    printf("Enter value of depth");
    scanf("%d",&d);
    {
        v=l*d*h;
    }
    printf("%d",v);
    getch();
}
