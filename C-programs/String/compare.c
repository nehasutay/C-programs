#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[10],str2[10];
    int i,j=0,k;
    printf("Enter the first string\n");
    scanf("%s",str1);
    printf("Enter the second string\n");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++);
    for(int j=0;j<=i-1;j++)
    {
        if(str1[j]!=str2[j])
    {
        k++;
    }
    }
    if (k==0)
    {
        printf("strings are same");
    }
    else
    {
        printf("strings are not same");
    }

    getch();

}
