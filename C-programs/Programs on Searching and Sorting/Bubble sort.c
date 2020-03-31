#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,j,c,b,temp;
    printf("Enter 5 array element from keyboard");
    for(c=0;c<=4;c++)
    {
        scanf("%d",&a[c]);
    }
    for(i=0;i<=4;i++)
    {
     for(j=0;j<(4-i);j++)
            {
              if(a[j]>a[j+1])
              {
                  temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
              }
    }
    }
    printf("sorted array is\t");
    for(int b=0;b<=4;b++)
    {
        printf("%d \n",a[b]);
    }
getch();
    }


