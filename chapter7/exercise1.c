#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int count_spaces=0;
	int count_nlines=0;
	int count_symbols=0;
	while((ch=getchar())!='#')
	{
		if (isspace(ch) && ch!='\n')
		{
			count_spaces++;
		}
		else if (ch=='\n')
		{
			count_nlines++;
		}
		else
		{
			count_symbols++;
		}
	}
	printf("Кол-во пробелов = %d, кол-во новых строк = %d, кол-во других символов =%d\n",
			count_spaces,count_nlines,count_symbols);
	return 0;
}

