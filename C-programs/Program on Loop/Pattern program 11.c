#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,sp,str;
    for(int i=1;i<=4;i++)
    {
        for (int sp=1;sp<39-i;sp++)
        {
            printf(" ");
        }
        for(int str=1;str<=i;str++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}
