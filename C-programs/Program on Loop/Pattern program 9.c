#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,rem;
    for(r=1;r<=4;r++)
    {
        for (c=1;c<=r;c++)
        {
            rem=c%2;
            printf("%d",rem);
        }
        printf("\n");
    }
    getch();
}
