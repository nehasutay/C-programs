#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,num=1;
    for(r=1;r<=4;r++)
    {
        for (c=1;c<=r;c++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    getch();
}


