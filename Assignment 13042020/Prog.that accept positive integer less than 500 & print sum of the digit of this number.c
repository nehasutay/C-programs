#include<stdio.h>
#include<conio.h>
void main()
{
    int num,a,sum=0;
    printf("Enter positive number less than 500");
    scanf("%d",&num);
    a=num;
    if(a<1||a>999)
    {
        printf("Given no.is out of range");
    }
    else
    {
      sum=sum+a%10;
      a=a/10;
      sum=sum+a%10;
      a=a/10;
      sum=sum+a%10;
      printf("Sum of digits%d\n",sum);
     }
     getch();
}

