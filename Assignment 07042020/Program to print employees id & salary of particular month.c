#include<stdio.h>
#include<conio.h>
void main()
{
    int id,hour;
    float salary,m;
    printf("Enter Employees ID: ");
	scanf("%d",&id);
	printf("Enter working hrs: ");
	scanf("%d",&hour);
	printf("Enter Salary amount/hr: ");
	scanf("%f",&m);
	salary=m*hour;
	printf("Employees ID=%d \nSalary=%2f\n",id,salary);
	getch();
}


