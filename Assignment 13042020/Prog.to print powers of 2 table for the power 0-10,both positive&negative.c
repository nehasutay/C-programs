#include<stdio.h>
#include<conio.h>
void main()
{
    int n,p;
    float q;
    printf("\n====================================");
    printf("\n n    2 to power n     2 to power -n");
    printf("\n====================================");
    p=1;
    for(n=0;n<11;n++)
    {
        if(n==0)

          p=1;
          else

              p=p*2;
              q=1.0/p;
              printf("\n%d         %d         %f",n,p,q);


        }
        printf("\n===============================");
        getch();
}
