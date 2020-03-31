#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,count;
    printf("Enter any number from keyboard");
    scanf("%d",&num);
    i=1;
    count=1;
    while(i<=10)
          {
           printf("%d*%d=%d\n",num,i,num*i);
            i++;
          }
getch();
}
