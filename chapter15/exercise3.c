#include <stdio.h>
int openbits(int num);
int main(void)
{
	int number;
	scanf("%d",&number);
	printf("%d\n",openbits(number));
	return 0;
}
int openbits(int num)
{
	int count=0;
	while(num!=0)
	{
		if (num%2==1)
			count+=1;
		num/=2;
	}
	return count;
}
