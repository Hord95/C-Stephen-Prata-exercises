#include <stdio.h>

int main(void)
{
	int ch;
	int count;
	while ((ch=getchar())!=EOF)
	{	
		if(ch!='\n')
		++count;
	}
	printf("count=%d\n",count);
	return 0;
}
