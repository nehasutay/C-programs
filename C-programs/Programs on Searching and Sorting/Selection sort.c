#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],temp;
    printf("Enter 5 element to stored in an array\n");
    for(int c=0;c<=4;c++)
    {
        scanf("%d",&a[c]);
    }
    for(int i=0;i<=4;i++)
    {
     for(int j=i+1;j<=4;j++)
            {
              if(a[i]>a[j])
              {
                  temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
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


