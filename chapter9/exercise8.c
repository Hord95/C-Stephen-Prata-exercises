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
	double pow=1;
	if (p>0 &&(n>0 ||n<0))
	{
	for (int i=1;i<=p;i++)
		pow*=n;
	} 
	else if (p<0 &&(n>0 ||n<0))
	{
 	for (int i=p;i<0;i++)	
		pow/=n;
	}
	else if(n==0 && (p>0 ||p<0))
	{
		pow=0;
	}
	else if(n==0 && p==0)
	{
		printf("Результат не определен = ");
		pow=1;
	}
	else if ( p==0 && (n<0 || n>0))
	{
		pow=1;
	}
	return pow;
}

