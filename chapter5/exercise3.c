#include <stdio.h>
int main(void)
{
	int days;
	int d_to_d;
	int d_to_w;
	scanf("%d",&days);
	while (days>0)
	{	
	d_to_d=days%7;
	d_to_w=days/7;
	printf("%d дней составляют %d недели и %d дня\n",days,d_to_w,d_to_d);
	scanf("%i",&days);
	}
	return 0;
}
