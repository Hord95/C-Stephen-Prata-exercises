#include <stdio.h>
double power(double n,int p);
int main(void)
{
	double x,xpow;
	int exp;
	printf("Enter number and exp\n");
	while(scanf("%lf %d",&x,&exp)==2)
	{
		xpow=power(x,exp);
		printf("%g\n",xpow);
	}
	return 0;
}
double power(double n,int p)
{
	double pow;
	if (p>0 &&(n>0 || n<0))
	{
	pow=n*power(n,p-1);
	} 
	else if (p<0 && (n>0 || n<0))
	{
		pow=1/n*power(n,p+1);
	}
	else if(n==0 && (p>0 || p<0))
	{
		pow=0;
	}
	else if(n==0 && p==0)
	{
		printf("Результат не определен = ");
		pow=1;
	}
	else if(p==0 &&(n>0 || n<0))
		pow=1;
	return pow;
}

