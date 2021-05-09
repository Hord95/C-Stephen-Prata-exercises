#include <stdio.h>
#define SIZE 7
void copy_arr(double target1[],double ar[],int n);

int main(void)
{
	double source[SIZE]={1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	double target1[3];
	copy_arr(target1,source+2,3);
}
void copy_arr(double target1[],double ar[],int n)
{
	for (int i=0;i<n;i++)
	{
		target1[i]=ar[i];
		printf("%f\n",target1[i]);
	}
}
