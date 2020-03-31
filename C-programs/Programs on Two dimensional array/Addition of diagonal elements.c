#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the elements of matrix");
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
    }

        for(int i=0;i<=2;i++)
        {
           sum=sum+a[i][i];
        }

        printf("\n The sum of diagonal elements of matrix=%d",sum);
    getch();
}
