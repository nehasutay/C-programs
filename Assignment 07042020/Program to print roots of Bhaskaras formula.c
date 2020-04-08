#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c,r1,x,y;
	printf("First number(a): ");
    scanf("%f",&a);
    printf("Second number(b): ");
    scanf("%f",&b);
    printf("Third number(c): ");
    scanf("%f",&c);
    r1=(b*b)-(4*(a)*(c));

    if(r1>0&&a!=0)
        {
		r1=sqrt(r1);
		x=(-b+r1)/(2*a);
		y=(-b-r1)/(2*a);
		printf("Root1 = %f\n",x);
		printf("Root2 = %f\n",y);
	   }
	else
	 {
		printf("Not possible to find the roots.\n");
	 }
    getch();
}
