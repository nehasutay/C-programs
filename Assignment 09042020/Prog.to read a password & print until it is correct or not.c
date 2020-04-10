#include<stdio.h>
#include<conio.h>
void main()
{
    int pswrd,a=10;
    while(a!=0)
    {
        printf("Enter the password");
        scanf("%d",&pswrd);
        if(pswrd==1234)
        {
            printf("Correct password");
            a=0;
        }
        else
        {
            printf("Incorrect password");
        }
        printf("\n");
    }
    getch();
}
