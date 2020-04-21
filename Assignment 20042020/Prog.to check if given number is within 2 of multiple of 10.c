#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num%10<=2||num%10>=8)
    {
        printf("Number is within 2 of multiple of 10");
    }
getch();
}
