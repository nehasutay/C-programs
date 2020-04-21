#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,sum;
    printf("Enter two integer");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("Sum=%d",sum);
    if(sum>=10&&sum<=20)
    {
        printf("\nSum is in the range 10 to 20");
        printf("\n30");
    }
    getch();
}
