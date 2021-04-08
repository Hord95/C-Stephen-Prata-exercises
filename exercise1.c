#include <stdio.h>
int main(void)
{
	const int min_in_hour=60;
	int minutes;
	int min_new;
	int hours_new;
	scanf("%d",&minutes);
	while (minutes>0)
	{
		min_new=minutes%min_in_hour;
		hours_new=minutes/min_in_hour;
		printf("%d hours and %d minutes\n",hours_new,min_new);
		scanf("%d",&minutes);
	}
	return 0;
}
