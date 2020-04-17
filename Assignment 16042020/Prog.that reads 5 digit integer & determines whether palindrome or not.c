#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n1,n2,n3,n4,n5,orgnum,rev;
    printf("Enter 5 digit integer");
    scanf("%d",&num);
    orgnum=num;
    n1=num%10;
    num=num/10;
     n2=num%10;
    num=num/10;
     n3=num%10;
    num=num/10;
     n4=num%10;
    num=num/10;
     n5=num%10;

     rev=n5*10000+n4*1000+n3*100+n2*10+n1*1;
     if(orgnum==rev)
     {
         printf("Number is palindrome");
     }
     else
     {
         printf("Number is not palindrome");
     }
    getch();

}
