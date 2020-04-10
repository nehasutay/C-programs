#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sqr,cube;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sqr=i*i;
        cube=i*i*i;
        printf("%d %d %d\n",i,sqr,cube);
    }
    getch();
}
