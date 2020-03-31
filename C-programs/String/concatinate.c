#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[10],str2[10];
    int i,l=0;
    printf("Enter the first string\n");
    scanf("%s",str1);
    printf("Enter the second string\n");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;str2[i]!='\0';i++)
    {
        str1[l+i]=str2[i];
    }
    printf("After concat:%s",str1);
    getch();
}


