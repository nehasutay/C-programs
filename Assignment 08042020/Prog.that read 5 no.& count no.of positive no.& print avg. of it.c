#include<stdio.h>
#include<conio.h>
void main()
{
    float a[4],sum=0,avg;
    int i,j,pcount=0;
    printf("Enter 5 numbers");
    for(i=0;i<=4;i++)
    {
        scanf("%f",&a[i]);
    }
    for(j=0;j<=4;j++)
    {
        if(a[j]>0)
    {
        pcount++;
        sum=sum+a[j];
    }
    }
    avg=sum/pcount;
    printf("Number of positive numbers:%d\n",pcount);
    printf("Average value of positive number:%.2f",avg);
    printf("\n");
    getch();
}
