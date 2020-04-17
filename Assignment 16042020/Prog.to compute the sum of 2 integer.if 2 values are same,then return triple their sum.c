#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2;
  printf("Enter two integer");
  scanf("%d \n %d",&num1,&num2);
  if(num1==num2)
  {
      printf("As both are same, value obtained is %d\n",(num1+num2)*3);
  }
else
{
    printf("Sum of the number is %d\n",num1+num2);
}
getch();
}
