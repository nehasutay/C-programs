#include<stdio.h>
#include<conio.h>
void main()
{
    int num,D1,rev=0,orgnum;
    printf("Enter n digit number");
    scanf("%d",&num);
    orgnum=num;
    while(num>0)
    {
        D1=num%10;
        rev=rev*10+D1;
        num=num/10;
    }
        printf("%d\n",rev);
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
