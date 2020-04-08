#include<stdio.h>
#include<conio.h>
void main()
{
    int sec,h,m,s;
    printf("Enter integer in second");
    scanf("%d",&sec);
    h=sec/3600;
	m=sec/60;
	s=sec-(60*m);
	printf("H:M:S-%d:%d:%d\n",h,m,s);
	getch();
}
