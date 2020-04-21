#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter non-negative number");
    scanf("%d",&num);
    if(num%13==0||num%13==1)
    {
        printf("It is multiple of 13 or it is one more than multiple of 13");
    }
getch();
}
