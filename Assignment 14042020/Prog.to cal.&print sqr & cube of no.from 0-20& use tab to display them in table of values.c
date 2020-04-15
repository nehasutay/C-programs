#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Number\tSquare\tCube\n");
    printf("========================\n");
    for(n=0;n<=20;n++)
    fprintf("%d\t%d\t%d\n",n, n*n, n*n*n);
    getch();
}
