#include <stdio.h>
int max(int ar[],int n);

int main(void)
{
	int ar[5]={5,3,9,6,2};
	printf("%d\n",max(ar,5));
}

int max(int ar[],int n)
{	
	int max;
	max=*ar;
	for (int i=0;i<n;i++)
	{
		if (ar[i]>=max)
			max=ar[i];
	}
	return max;
}
