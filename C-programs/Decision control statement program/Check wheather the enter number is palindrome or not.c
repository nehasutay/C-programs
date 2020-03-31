#include<stdio.h>
#include<conio.h>
void main()
{
   int num,n1,n2,n3,orgnum,rev;
    printf("Enter the three digit number");
    scanf("%d",&num);
    orgnum=num;
        n1=num%10;
        num=num/10;
        n2=num%10;
        num=num/10;
        n3=num%10;
       rev=n1*100+n2*10+n3*1;
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
