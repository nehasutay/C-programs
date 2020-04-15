#include<stdio.h>
#include<conio.h>
void main()
{
    float PA,RI,DAYS,INTR;
    const int yearIndays=365;
    printf("Enter principal amount:");
    scanf("%f",&PA);
    while(PA!=0)
    {
    printf("Enter rate of interest:");
    scanf("%f",&RI);
    printf("Enter terms of loan in days:");
    scanf("%f",&DAYS);
    INTR=(PA*RI*DAYS)/yearIndays;
    printf("The interest amount is %f\n",INTR);
    printf("\n\ninput loan principal amount:");
    scanf("%f",&PA);
    }
    getch();
    }


