#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,peri;
    printf("Enter first value");
    scanf("%f",&a);
    printf("Enter second value");
    scanf("%f",&b);
    printf("Enter third value");
    scanf("%f",&c);
    if(a<(b+c)&&b<(a+c)&&c<(b+a))
    {
        peri=a+b+c;
        printf("Perimeter=%.1f\n",peri);
    }
    else
    {
        printf("Not possible to make triangle");
    }
    getch();

}
