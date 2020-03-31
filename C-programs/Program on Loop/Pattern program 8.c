#include<stdio.h>
#include<conio.h>
void main()
{
    char ch='A';
    int r,c;
    for(r=4;r>=1;r--)
    {
        for (c=1;c<=r;c++)
        {
            printf("%c",ch);
            ch++;
        }
        ch='A';
        printf("\n");

    }
    getch();
}
