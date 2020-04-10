#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j=1,x=0;
    printf("Enter no.of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        while(x<3)
    {
        printf("%d ",j++);
        x++;
    }
    x=0;
    printf("\n");
    }
    getch();
}

