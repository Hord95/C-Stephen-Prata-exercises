#include <stdio.h>
#define SIZE 81
void func(char * array);

int main(void)
{
	char word[SIZE];
	func(word);
	fputs(word,stdout);
	printf("\n");
	return 0;
}
void func(char * array)
{
	for (int i=0;i<SIZE;i++)
		{
			array[i]=getchar();
			if (array[i]=='\n' || array[i]=='\t' || array[i]==' ')
				{
				array[i]='\0';
				break;
				}
		}
}
