#include<stdio.h>
#include<conio.h>
void main()
{
    char*letters="abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    printf("List of integer equivalent of letters(a-z,A-Z).\n");
    printf("===============================================\n");
    for(n=0;n<53;n++)
    {

        printf("%d\t",letters[n]);
        if((n+1)%6==0)
            printf("\n");
    }
    getch();
}
