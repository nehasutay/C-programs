#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2;
  printf("Enter two positive integer");
  scanf("%d%d",&num1,&num2);
  if(num1>=20&&num1<=30&&num2>=20&&num2<=30)
  {
     printf("Num1 and num2 is in the given range");
  }
  else
  {
      return 0;
  }
  getch();
}
