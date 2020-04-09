#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sqr,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sqr=i*i;
            printf("Square of even number:%d is %d\n",i,sqr);
        }
    }
    getch();
}

