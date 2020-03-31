#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,power,count;
    printf("Enter x from keyboard");
    scanf("%d",&x);
    printf("Enter y from keyboard");
    scanf("%d",&y);
    count=1;
    power=1;
    while(count<=y)
    {
        power=power*x;
        count++;
    }
        printf("%d",power);
getch();
}
