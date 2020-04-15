#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[80],str2[80];
    int i;
    printf("Enter the string:");
    scanf("%s",str2);
    for(i=0;str2[i]!='\0';i++)
        str1[i]=str2[i];
    str1[i]='\0';
    printf("\n");
    printf("Original string:%s\n",str1);
    printf("Number of character=%d\n",i);
    getch();
}

