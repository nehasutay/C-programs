#include<stdio.h>
#include<conio.h>
void main()
{
   int num,n1,n2,n3,orgnum,arm;
    printf("Enter the three digit number");
    scanf("%d",&num);
    orgnum=num;
        n1=num%10;
        num=num/10;
        n2=num%10;
        num=num/10;
        n3=num%10;
        arm=n1*n1*n1+n2*n2*n2+n3*n3*n3;
        if(orgnum==arm)
        {
            printf("Number is armstrong number");
        }
        else
        {
            printf("Number is not armstrong number");
        }
getch();
}
