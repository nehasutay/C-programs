#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    if(a>=0&&a<=20)
    {
        printf("It belongs to range 0 to 20\n");
    }
    else if(a>=21&&a<=40)
    {
        printf("It belongs to range 21 to 40\n");
    }
    else if(a>=41&&a<=60)
    {
        printf("It belongs to range 41 to 60\n");
    }
    else if(a>=61&&a<=80)
    {
        printf("It belongs to range 61 to 80\n");
    }
    else
    {
        printf("Error");
    }
    getch();

}
