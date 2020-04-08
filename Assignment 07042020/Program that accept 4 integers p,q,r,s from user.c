#include<stdio.h>
#include<conio.h>
void main()
{
    int p, q, r, s;
    printf("First integer: ");
    scanf("%d",&p);
    printf("Second integer: ");
    scanf("%d",&q);
    printf("Third integer: ");
    scanf("%d",&r);
    printf("Fourth integer: ");
    scanf("%d",&s);
    if((r>0)&&(s>0)&&(p%2==0)&&(q>r)&&(s>p)&&((r+s)>(p+q)))
	 {
		printf("Correct values\n");
	 }
	else
    {
		printf("Wrong values\n");
	}
	getch();
}
