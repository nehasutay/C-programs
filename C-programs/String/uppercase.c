#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[10];
    int i;
    printf("Enter the string\n");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='a'&&str1[i]<='z')
        {
            str1[i]=str1[i]-32;
        }
    }
    printf("The given string in uppercase=%s",str1);
    getch();
}

