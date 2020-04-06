#include<stdio.h>
#include<conio.h>
#include<string.h>
struct cust
{
   int id;
   char name[10];
   char add[10];
   int ph;
};
void main()
{
    struct cust a[5];
    int i;
    for(i=0;i<=4;i++)
    {
     printf("Enter id of customer");
    scanf("%d",&a[i].id);
    printf("Enter name of customer");
    scanf("%s",&a[i].name);
    printf("Enter add of customer");
    scanf("%s",&a[i].add);
    printf("Enter phone no. of customer");
    scanf("%ld",&a[i].ph);
    }
    for(i=0;i<=4;i++)
    {
        if(a[i].ph%100==88)
        {
    printf("%d\n",a[i].id);
    printf("%s\n",a[i].name);
    printf("%s\n",a[i].add);
    printf("%ld",a[i].ph);
        }

    }

    getch();
}
