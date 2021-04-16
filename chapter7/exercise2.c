#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int count=0;
	while((ch=getchar())!='#')
	{

		++count;
		if (ch=='\n')
			printf("\\n-%d ",ch);
		else if(isspace(ch))
			printf("SPACE-%d ",ch);
		else
		printf("%c-%d ",ch,ch);
		
		if (count%8==0)
		{
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
