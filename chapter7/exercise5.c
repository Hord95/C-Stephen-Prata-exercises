#include <stdio.h>

int main(void)
{
	char ch;
	char count=0;
	while((ch=getchar())!='#')
	{
		switch (ch)
		{
			case '.':count++;
				 putchar('!');
				 break;
			case '!':count++;
				 printf("!!");
				 break;
			default :putchar(ch);
		}
	}
	printf("\nКол-во замен=%d\n",count);
	return 0;
}
	

