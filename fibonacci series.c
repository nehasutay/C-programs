#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c,i,num;
    printf("Enter the numbers");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        if(i<=1)
        {
            c=i;
        }
        else
        {
            c=a+b;
        a=b;
        b=c;
        }
        printf("%d",c);
    }
    getch();
}
