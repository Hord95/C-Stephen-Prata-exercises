#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;
	int count_words=0;
	int count_letters=0;
	while((ch=getchar())!=EOF)
	{
		if (ispunct(ch)||isspace(ch))
		++count_words;
		else 
		++count_letters;
	}
	printf("среднее кол-во букв в словах=%d\n",count_letters/count_words);
	return 0;
}
		
