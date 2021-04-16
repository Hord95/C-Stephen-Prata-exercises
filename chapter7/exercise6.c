#include <stdio.h>

int main(void)
{
	char ch;
	char prev;
	int count=0;
	while ((ch=getchar())!='#')
	{
		if (prev=='e' && ch=='i')
			++count;
		prev=ch;
	}
	printf("count=%d\n",count);
	return 0;
}

