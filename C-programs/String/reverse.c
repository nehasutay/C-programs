#include<stdio.h>
#include<conio.h>
void main()
{
    char str[10];
    int i;
    printf("Enter the string\n");
    scanf("%s",str);
    for(i=9;i>=0;i--)
    {
        printf("%c",str[i]);
    }

    getch();
}
