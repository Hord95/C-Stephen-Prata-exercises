#include <stdio.h>

int main(void)
{
	char ch;
	char count=0;
	while((ch=getchar())!='#')
	{
		if (ch=='.')
		{
		count++;
		putchar('!');
		}
		else if (ch=='!')
		{
			count++;
			printf("!!");
		}
		else putchar(ch);
	}
	printf("\nКол-во замен=%d\n",count);
	return 0;
}
	

