#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,num1,num2,res;
    printf("Press 1 for addition\n");
     printf("Press 2 for subtraction\n");
      printf("Press 3 for multiplication\n");
       printf("Press 4 for division\n");
       printf("Enter your choice");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:
        printf("Enter 2 no. for addition");
        scanf("%d%d",&num1,&num2);
        res=num1+num2;
        printf("Sum=%d",res);
        break;
        case 2:
        printf("Enter 2 no. for subtraction");
        scanf("%d%d",&num1,&num2);
        res=num1-num2;
        printf("Sub=%d",res);
        break;
        case 3:
        printf("Enter 2 no. for multiplication");
        scanf("%d%d",&num1,&num2);
        res=num1*num2;
        printf("mult=%d",res);
        break;
        case 4:
        printf("Enter 2 no. for division");
        scanf("%d%d",&num1,&num2);
        res=num1/num2;
        printf("div=%d",res);
        break;
        default:
        printf("Invalid choice");
       }
        getch();
}
