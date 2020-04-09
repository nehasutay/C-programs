#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5];
    int i,j,pcount=0,ncount=0;
    printf("Enter 5 numbers");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<=4;j++)
    {
        if(a[j]>0)
        {
            pcount++;
        }
        if(a[j]<0)
        {
            ncount++;
        }
    }
    printf("Number of positive number:%d\n",pcount);
    printf("Number of negative number:%d",ncount);
    printf("\n");
    getch();
}

