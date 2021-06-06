#include <stdio.h>
#define SIZE 81
void func(char *array);
int main(void)
{
	char array[SIZE];
	func(array);
	puts(array);
	return 0;
}
void func(char *array)
{	
	int n;
	printf("Enter count of cymbols\n");
	scanf("%d",&n);
	printf("Enter text\n");
	for (int i =0;i<n;i++)
		{
            array[i]=getchar();
            if (array[i]==' ' || array[i]=='\t')
                break;
            if (i>1 && array[i]=='\n')
                break;
        }
}
