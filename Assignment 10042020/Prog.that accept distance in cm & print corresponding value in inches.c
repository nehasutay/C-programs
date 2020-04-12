#include<stdio.h>
#include<conio.h>
void main()
{
    float inch,cm;
    printf("Enter distance in centimeter:");
    scanf("%f",&cm);
    inch=cm/2.54;
    printf("Distance of %f cm is=%f inches\n",cm,inch);
    getch();
}
