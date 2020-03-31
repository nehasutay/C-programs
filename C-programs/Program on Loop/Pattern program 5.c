#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int r,c;
    ch='*';
    for(r=4;r>=1;r--)
    {
        for (c=1;c<=r;c++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    getch();
}

