#include<stdio.h>
#include<conio.h>
void main()
{
    int m[99],i,count=0,sum=0;
    float avg;
    printf("Enter marks of mathematic");
    for(i=0; ;i++)
    {
        scanf("%d",&m[i]);
        if(m[i]<=0)
        {
           break;
        }
        count++;
       sum=sum+m[i];
        }
        avg=sum/count;
        printf("Average:%f",count);
        getch();

}
