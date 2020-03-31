#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],beg,mid,end,ser,i;
    printf("Enter 5 array element from keyboard");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter num u want to search");
    scanf("%d",&ser);
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]<ser)
        {
        beg=mid+1;
        }
    else if(a[mid]==ser)
    {
        printf("%d found at location %d\n",ser,(mid+1));
        break;
    }
    else
    {
        end=mid-1;
        mid=(beg+end)/2;
    }
    }
        if(beg>end)
    {
    printf("%d Not found\n",ser);
    }
    getch();
}
