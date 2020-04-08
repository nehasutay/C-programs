#include<stdio.h>
#include<conio.h>
void main()
{
    int d;
    float f,avg;
    printf("Total distance in km:");
    scanf("%d",&d);
    printf("Total fuel spent in liters:");
    scanf("%2f",&f);
    avg=d/f;
    printf("Average consumption=%f",avg);
    getch();
}
