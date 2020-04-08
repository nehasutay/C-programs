#include<stdio.h>
#include<conio.h>
void main()
{
    float w1,n1,w2,n2,avg;
    printf("Weight of Item1: ");
	scanf("%f",&w1);
	printf("No. of purchase item1: ");
	scanf("%f",&n1);
	printf("Weight of Item2: ");
	scanf("%f",&w2);
	printf("No.of purchase item2: ");
	scanf("%f",&n2);
	avg=((w1*n1)+(w2*n2))/(n1+n2);
	printf("Average Value = %f\n",avg);
	getch();
}
