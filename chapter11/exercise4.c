#include <stdio.h>
#define SIZE 81
void func(char * array,int n);

int main(void)
{
	char word[SIZE];
	int n;
	printf("count of symbols\n");
	scanf("%d",&n);
	func(word,n);
	fputs(word,stdout);
	printf("\n");
	return 0;
}
void func(char * array,int n)
{
	array[0]=getchar();
	for (int i=1;i<=n;i++)
		{
			array[i]=getchar();
			if (array[i]=='\n' || array[i]=='\t' || array[i]==' ')
				{
				array[i]='\0';
				break;
				}
		}
}
