#include <stdio.h>

int main(void)
{
	const int max=150;
	int friends=5;
	int week=1;
	while (friends<max)
	{
		friends=(friends-week)*2;
		printf("%d week = %d friends\n",week,friends);
		week+=1;
	}
	return 0;
}
