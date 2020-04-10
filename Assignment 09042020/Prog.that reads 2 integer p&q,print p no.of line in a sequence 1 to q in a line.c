#include<stdio.h>
#include<conio.h>
void main()
{
    int p,q,i,j,l;
    printf("Enter number of lines");
    scanf("%d",&p);
    printf("Enter sequence of numbers");
    scanf("%d",&q);
    for(i=1,l=1;i<=p;i++)
    {
        for(j=1;j<=q;j++)
        {
            printf("%d ",l);
            l++;
        }
        printf("\n");
    }
getch();
}
