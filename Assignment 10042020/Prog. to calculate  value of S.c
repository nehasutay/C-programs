#include<stdio.h>
#include<conio.h>
void main()
{
    float s=0.0;
    int i;
    for(i=1;i<=50;i++)
    {
        s=s+(1/i);
    }
    printf("S:%.2f\n",s);
    getch();
}
