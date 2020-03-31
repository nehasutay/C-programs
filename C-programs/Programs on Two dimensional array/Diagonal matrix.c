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
            if(i!=j&&a[i][j]==0)
            {
            f=f++;
            }
            }
            }
            if(f==6)
    {
        printf("Matrix is diagonal matrix \n");
    }
    else
    {
         printf("matrix is not diagonal matrix");
    }
    getch();
}
