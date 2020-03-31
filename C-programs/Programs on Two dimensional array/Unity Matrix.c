#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,f=0;
    printf("Enter matrix elements");
    for(int i=0;i<=2;i++)
    {
        for (int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<=2;i++)
    {
        for (int j=0;j<=2;j++)
            {
            if(i==j&&a[i][j]!=1)
            {
            f=1;
            }
            else if
                (i!=j&&a[i][j]!=0)
            {
              f=1;

            }
            }
    }
    if
        (f==0)
    {
        printf("Matrix is unity matrix \n");
    for(int i=0;i<=2;i++)
    {
        for (int j=0;j<=2;j++)
    {
            printf("%d",a[i][j]);
    }
     printf("\n");
    }
    }
    else
    {
        printf("Matrix is not unity matrix \n");
    }
    getch();
}



