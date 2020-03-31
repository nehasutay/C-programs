#include<stdio.h>
#include<conio.h>
void main()
{
    int I,R,V;
    printf("Enter value of current");
    scanf("%d",&I);
    printf("Enter value of resistance");
    scanf("%d",&R);
    {
       V=I*R;
    }
    printf("%d",V);
    getch();
}
