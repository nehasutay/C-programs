#include<stdio.h>
#include<conio.h>
void main()
{
    int uabs(int),num,result;
    printf("Enter the negative value");
    scanf("%d",&num);
    printf("Original value=%d",num);
    result=abs_val(num);
    printf("\nAbsolute value=%d",result);
    getch();
}
abs_val(int y)
{
        if(y<0)
        return(y*-1);
        else
        return(y);
}
