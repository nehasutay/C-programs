#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,max=5;
    printf("Enter 6 array elements");
    for(i=0;i<=4;i++)
    {
         scanf("%d",&a[i]);
    }
     for(i=0;i<=4;i++)
    {
        if(a[i]<max)
        {
            printf("Value less than 5= %d at A[%d]\n",a[i],i);
        }
    }
    getch();
}
