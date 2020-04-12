#include<stdio.h>
#include<conio.h>
void main()
{
    int a[6],i,j,k,temp;
    printf("Enter 6 array elements");
    for(i=0;i<=5;i++)
    {
         scanf("%d",&a[i]);
    }
    for(j=0;j<=5;j++)
        {
            if(j<(5/2))
            {
              temp=a[j];
              a[j]=a[5-(j+1)];
              a[5-(j+1)]=temp;
            }
        }
        for(k=0;k<=5;k++)
        {
            printf("a[%d]=%d\n",k,a[k]);
        }
}

