#include <stdio.h>

int main(void)
{
	int ch;
	int smalllet=0;
	int biglet=0;
	int otherlet=0;
	while((ch=getchar())!=EOF)
	{
		if (ch!='\n')
		{
			if(ch>=65 && ch<=90)
				++biglet;
			else if(ch>=97 && ch<=122)
				++smalllet;
			else 
				++otherlet;
		}
	}
	printf("кол-во строчный символов = %d\n"
		"кол-во прописных символов = %d\n"
		"кол-во остальных символов на =%d\n",smalllet,biglet,otherlet);
	return 0;
}


