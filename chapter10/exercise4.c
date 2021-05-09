#include <stdio.h>
int max(double ar[],int n);

int main(void)
{
	double ar[5]={5.1,3.2,9.2,6.0,2.2};
	printf("%d\n",max(ar,5));
}

int max(double ar[],int n)
{	
	int max;
	max=*ar;
	int max_ind=0;
	for (int i=0;i<n;i++)
	{
		if (ar[i]>=max)
		{
			max=ar[i];
			max_ind=i;
		}
	}
	return max_ind;
}
