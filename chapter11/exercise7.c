#include <stdio.h>
#define SIZE 81
void mystrncpy(char * s1,char * s2,int n);

int main(void)
{
	char s1[SIZE];
	char s2[SIZE];
	int n;
	scanf("%d ",&n);
	fgets(s2,SIZE,stdin);
	mystrncpy(s1,s2,n);
	fputs(s1,stdout);
	printf("\n");
	return 0;
}
void mystrncpy(char * s1,char * s2,int n)
{
	for (int i=0;i<n;i++)
	{
		s1[i]=s2[i];
	}
}
