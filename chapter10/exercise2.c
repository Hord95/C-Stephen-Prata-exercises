#include <stdio.h>
void copy_arr(double target1[],double ar[],int n);
void copy_ptr(double target2[],double ar[],int n);
void copy_ptrs(double target3[],double * ar,double * end);

int main(void)
{
	double source[5]={1.1,2.2,3.3,4.4,5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(target1,source,5);
	copy_ptr(target2,source,5);
	copy_ptrs(target3,source,source+5);
}
void copy_arr(double target1[],double ar[],int n)
{
	for (int i=0;i<n;i++)
	{
		target1[i]=ar[i];
		printf("%f\n",target1[i]);
	}
}
void copy_ptr(double target2[],double ar[],int n)
{
	for (int i=0;i<n;i++,target2++,ar++)
	{
		*target2=*ar;
		printf("%f\n",*target2);
	}
}
void copy_ptrs(double target3[],double * ar,double * end)
{
	while(ar<end)
	{
		*target3=*ar;
		++ar;
		printf("%f\n",*target3);
	}
}

