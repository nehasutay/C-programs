#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,num1,num2,res;
    printf("Press + for addition\n");
     printf("Press - for subtraction\n");
      printf("Press * for multiplication\n");
       printf("Press / for division\n");
       printf("Enter your choice");
       scanf("%c",&ch);
       if(ch=='+')
       {
        printf("Enter 2 no. for addition");
        scanf("%d%d",&num1,&num2);
       res=num1+num2;
           printf("Sum=%d",res);
}
       else
        if(ch=='-')
        {
        printf("Enter 2 no. for subtraction");
        scanf("%d%d",&num1,&num2);
       res=num1-num2;
           printf("Sub=%d",res);
       }
       else
       if(ch=='*')
       {
        printf("Enter 2 no. for multiplication");
        scanf("%d%d",&num1,&num2);
       res=num1*num2;
           printf("mult=%d",res);
       }
       else
       if(ch=='/')
       {
        printf("Enter 2 no. for division");
        scanf("%d%d",&num1,&num2);
       res=num1/num2;
           printf("div=%d",res);
       }
       else
       {
           printf("Invalid choice");
       }
       getch();

}
