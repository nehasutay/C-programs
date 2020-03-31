#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2];
    printf("Enter values to store in an array \n");
    for(int i=0;i<=1;i++)
    {
        for (int j=0;j<=1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Values entered are \n");
    for(int y=0;y<=1;y++)
    {
        for(int z=0;z<=1;z++)
        {
            printf("%d ",a[y][z]);
        }
          printf("\n");
    }
    getch();
}


