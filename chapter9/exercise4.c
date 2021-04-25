#include <stdio.h>
double invert(double x,double y);

int main(void)
{
	double num1;
	double num2;
	scanf("%lf %lf",&num1,&num2);
	printf("%lf\n",invert(num1,num2));
	return 0;
}
double invert(double x,double y)
{
	double harmonic;
	harmonic=2/(1/x+1/y);
	return harmonic;
}
