#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n1,n2,n3,n4,n5,ev=0,od=0;
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
        if(n1%2==0)
        {
            ev=ev+n1;
        }
        else
        {
            od=od+n1;
        }
        if(n2%2==0)
        {
            ev=ev+n2;
        }
        else
        {
            od=od+n2;
        }
        if(n3%2==0)
        {
            ev=ev+n3;
        }
        else
        {
            od=od+n3;
        }
        if(n4%2==0)
        {
            ev=ev+n4;
        }
        else
        {
            od=od+n4;
        }
        if(n5%2==0)
        {
            ev=ev+n5;
        }
        else
        {
            od=od+n5;
        }
        {
            printf("Addition of even digits=%d",ev);
        }
        printf("\n");
        {
            printf("Addition of odd digits=%d",od);
        }
        getch();
}

