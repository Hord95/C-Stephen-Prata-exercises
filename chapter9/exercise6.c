#include <stdio.h>
void func(double * x,double * y,double * z);

int main(void)
{
	double num1;
	double num2;
	double num3;
	scanf("%lf %lf %lf",&num1,&num2,&num3);
	func(&num1,&num2,&num3);
	printf("%lf %lf %lf",num1,num2,num3);
	return 0;
}
void func(double * x,double * y,double * z)
{
	double temp1;
	if (*x>=*y && *x>=*z && *y>=*z)
	{
		temp1=*x;
		*x=*z;
		*z=temp1;
	} else if (*x>=*y && *x>=*z && *z>=*y)
	{
		temp1=*x;
		*x=*y;
		*y=*z;
		*z=temp1;
	} else if (*y>=*x && *y>=*z && *x>=*z)
	{
		temp1=*x;
		*x=*z;
		*z=*y;
		*y=temp1;
	} else if(*y>=*x && *y>=*z && *z>=*x)
	{
		temp1=*y;
		*y=*z;
		*z=temp1;
	} else if(*z>=*x && *z>=*y && *x>=*y)
	{
		temp1=*x;
		*x=*y;
		*y=temp1;
	} 
}


			
