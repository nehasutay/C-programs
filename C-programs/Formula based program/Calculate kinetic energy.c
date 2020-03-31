#include<stdio.h>
#include<conio.h>
void main()
{
    int m,v,Ek;
    printf("Enter value of mass");
    scanf("%d",&m);
    printf("Enter value of velocity");
    scanf("%d",&v);
    {
      Ek=1/2*(m*v*v);
    }
    printf("%d",Ek);
    getch();
}
