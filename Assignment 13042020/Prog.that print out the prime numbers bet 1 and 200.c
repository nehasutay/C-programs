#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,flag,count=0;
    printf("Prime number from 1 to 200:\n");
    for(i=2;i<199;i++)
    {
        flag=1;
       for(j=2;j<=i/2;j++)
       {
           if(i%j==0)
           {
               flag=0;
           }
       }
       if(flag==1)
       {
           printf("%5d ",i);
           count++;
           if(count%10==0)
           {
               printf("\n");
           }
       }
    }
    printf("\n");
    getch();
}

