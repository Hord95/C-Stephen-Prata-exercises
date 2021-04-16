#include <stdio.h>

int main(void)
{
	int number;
	int divisor;
	int count=0;
	scanf("%d",&number);
	divisor=number;
		while (number>1)
		{
		for(int divisor=number;divisor>=1;divisor--)
			{
				if ( number%divisor==0)
				{
					++count;
				}
		
			}
		if (count==2)
		{
			printf("%d\n",number);
		}
		--number;
		divisor=number;
		count=0;
		}
	return 0;
}

