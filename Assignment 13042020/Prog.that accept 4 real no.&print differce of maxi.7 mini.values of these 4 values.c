#include<stdio.h>
#include<conio.h>
void main()
{
  float num1,num2,num3,num4,max,min;
  printf("Enter 4 numbers from keyboard");
  scanf("%f%f%f%f",&num1,&num2,&num3,&num4);
  if(num1>=num2&&num1>=num3&&num1>=num4)
  {
      max=num1;
  }
  else if(num2>=num1&&num2>=num3&&num2>=num4)
  {
      max=num2;
  }
   else if(num3>=num1&&num3>=num2&&num3>=num4)
   {
       max=num3;
   }
   else
   {
       max=num4;
   }
   if(num1<=num2&&num1<=num3&&num1<=num4)
  {
      min=num1;
  }
  else if(num2<=num1&&num2<=num3&&num2<=num4)
  {
      min=num2;
  }
   else if(num3<=num1&&num3<=num2&&num3<=num4)
   {
       min=num3;
   }
   else
   {
       min=num4;
   }
   printf("Difference is %.4f\n",max-min);
   getch();
}
