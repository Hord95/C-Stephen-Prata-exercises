#include <stdio.h>
void to_binary(unsigned long n,int number_system);

int main(void)
{
	unsigned long number;
	int number_system;
	while(scanf("%lu %d",&number,&number_system)==2)
	{
		to_binary(number,number_system);
		putchar('\n');
	}
	return 0;
}
void to_binary(unsigned long n,int number_system)
{
	int r;
	r=n%number_system;
	if (n>number_system)
		to_binary(n/number_system,number_system);
	if (r==0)
		putchar('0');
	else if (r==1) 
		putchar('1');
	else if(r==2)
		putchar('2');
	else if (r==3)
		putchar('3');
	else if (r==4)
		putchar('4');
	else if (r==5)
		putchar('5');
	else if(r==6)
		putchar('6');
	else if(r==7)
		putchar('7');
	else if (r==8)
		putchar('8');
	else if(r==9)
		putchar('9');
	return;
}

