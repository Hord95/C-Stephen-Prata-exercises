#include <stdio.h>

int main(void)
{
	int ch;
	while ((ch=getchar())!=EOF)
	{	
		switch(ch) {
				case 7:printf("\\a = 7\n");
				       break;
				case 8:printf("\\b = 8\n");
				       break;
				case 9 : printf("\\t = 9\n");
					 break;
				case 10: printf("\\n = 10\n");
					 break;
				case 11: printf("\\v = 11\n");
					 break;
				case 12 :printf("\\f = 12\n");
					 break;
				case 13:printf("\\r = 13\n");
					break;
				default :printf("%c = %d \n",ch,ch);
		}
	}
	return 0;
}
