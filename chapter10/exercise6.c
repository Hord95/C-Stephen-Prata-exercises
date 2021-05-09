#include <stdio.h>
void reverse(double ar[],int n);

int main(void)
{
	double ar[5]={5.1,3.2,9.2,6.0,2.3};
	reverse(ar,5);
}

void reverse(double ar[],int n)
{	
	double new_ar[5];
	for (int i=0;i<n;i++)
		new_ar[i]=ar[4-i];
	for (int i=0;i<n;i++)
	printf("%.1f\n",new_ar[i]);
}
