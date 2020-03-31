#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2],b[2][2],i,j,c[2][2];
    printf("Enter values to store in an array \n");
    printf("Enter elements of 1st matrix");
    for(int i=0;i<=1;i++)
    {
        for (int j=0;j<=1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix");
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            scanf("%d",&b[i][j]);
        }
        for(int i=0;i<=1;i++)//addition
       {
        for(int j=0;j<=1;j++)
        {
           c[i][j] =a[i][j]+b[i][j];
        }
       }
    }
        printf("Sum of two matrices:\n");// printing result
        for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    getch();
}
