#include <stdio.h>
unsigned long Fibonacci(unsigned n);

int main(void)
{
	unsigned int n;
	scanf("%u",&n);
	printf("%lu\n",Fibonacci(n));
	return 0;
}
unsigned long Fibonacci(unsigned n)
{
	unsigned long answer;
	unsigned long fib1=1;
	unsigned long fib2=1;
	int i=0;
	if (n==1 || n==2)
		answer=1;
	else if(n>2){
	while (i<n-2)
	{
		answer=fib1+fib2;
		fib1=fib2;
		fib2=answer;
		++i;
	}
	}
	return answer;
}
