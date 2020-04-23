#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2],i,flag=0;
    printf("Enter the three numbers");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
        if(i!=0)
        {
            if(a[i]<=a[i-1])
            {
                printf("Order should be in ascending order");
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        if(a[0]-a[1]==a[2]-a[1])
        {
            printf("true");
        }
        else
            printf("false");
    }
    getch();
}

