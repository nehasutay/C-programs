#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2],b[2][2],mult[2][2];
    int r1,r2,c1,c2,i,j,k,sum=0;
    printf("Enter no. of rows and column of 1st matrix");
    scanf("%d%d",&r1,&c1);
    printf("Enter the elements of 1st matrix");
    for(int i=0;i<r1;i++)
    {
        for (int j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter no. of rows and column of 1st matrix");
    scanf("%d%d",&r2,&c2);
    printf("Enter the elements of 1st matrix");
    for(int i=0;i<r2;i++)
    {
        for (int j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)
            {
    sum=sum+a[i][k]*b[k][j];
            }
            mult[i][j]=sum;
            sum=0;
        }
    }
    if(c1!=r2)
    {
        printf("Matrix multiplication not possible");
    }
    printf("Multiplication of two matrix: \n");
    for(int i=0;i<r1;i++)
    {
        for (int j=0;j<c2;j++)
        {
            printf("%d ",mult[i][j]);
            }
        printf("\n");
}
    getch();
}





