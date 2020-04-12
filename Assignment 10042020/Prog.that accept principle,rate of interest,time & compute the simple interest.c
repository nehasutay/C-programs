#include<stdio.h>
#include<conio.h>
void main()
{
    int p,r,t,SI;
    printf("Enter principal");
    scanf("%d",&p);
    printf("Enter rate of interest");
    scanf("%d",&r);
    printf("Enter time");
    scanf("%d",&t);
    SI=(p*r*t)/100;
    printf("Simple interest=%d",SI);
    getch();
}
