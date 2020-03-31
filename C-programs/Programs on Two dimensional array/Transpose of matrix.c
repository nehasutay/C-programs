#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],trans[3][3],i,j;
    printf("Enter values to store in an array \n");
    printf("Enter matrix elements");
    for(int i=0;i<=2;i++)
    {
        for (int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered matrix:\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);
           }
            printf("\n");
        for(int i=0;i<=2;i++)
       {
        for(int j=0;j<=2;j++)
        {
           trans[j][i]=a[i][j];
        }
       }
    }
        printf("\nTranspose of matrix:\n");
        for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    getch();
}
