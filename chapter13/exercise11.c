#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main(int argc,char *argv[])
{
	FILE *fp;
	char text[SIZE];
	fp=fopen(argv[2],"r");
	while (fgets(text,SIZE,fp)!=NULL)
	{
		if (strstr(text,argv[1]))
			fputs(text,stdout);
	}
	return 0;
}