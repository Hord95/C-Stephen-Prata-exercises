#include <stdio.h>
double diff(double ar[],int n);

int main(void)
{
	double ar[5]={5.1,3.2,9.2,6.0,2.3};
	printf("%.1f\n",diff(ar,5));
}

double diff(double ar[],int n)
{	
	float max;
	max=*ar;
	float min=*ar;
	float diff;
	for (int i=0;i<n;i++)
	{
		if (ar[i]>=max)
			max=ar[i];
		if (ar[i]<=min)
			min=ar[i];
	}
	diff=max-min;
	return diff;
}
