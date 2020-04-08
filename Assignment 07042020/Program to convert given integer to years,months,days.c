#include<stdio.h>
#include<conio.h>
void main()
{
	int days,y,m,d,x;
	printf("Input no.of days: ");
	scanf("%d",&days);
	y=days/365;
	x=days-(365*y);
    m=x/30;
	d=x-(m*30);
	printf("%d Years\n%d Months\n%d Days",y,m,d);
}
