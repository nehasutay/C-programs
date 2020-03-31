#include<stdio.h>
#include<conio.h>
void main()
{
    int num,D1,add=0;
    printf("Enter n digit number");
    scanf("%d",&num);
    while(num>0)
    {
        D1=num%10;
        add=add+D1;
        num=num/10;
    }
        printf("%d\n",add);
getch();
}
