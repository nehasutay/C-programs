#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n1,n2,n3,n4,n5,res;
    printf("Enter 5 digit number from keyboard");
    scanf("%d",&num);
        n1=num%10;
        num=num/10;
        n2=num%10;
        num=num/10;
        n3=num%10;
        num=num/10;
        n4=num%10;
        num=num/10;
        n5=num%10;
        {
            res=n1+n2+n3+n4+n5;
        }
        {
        printf("Addition of all the digits= %d",res);
        }
getch();
}

