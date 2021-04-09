#include <stdio.h>

int main(void)
{
	int count,sum;
	count=0;
	sum=0;
	int max;
	scanf("%i",&max);
	while(count++<max)
		sum=sum+count;
	printf("sum=%d\n",sum);
	return 0;
}
