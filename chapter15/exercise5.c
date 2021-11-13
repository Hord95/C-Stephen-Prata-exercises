#include <stdio.h>
int rotate(unsigned int val,int pos);
int main(void)
{
	unsigned int number;
	int position;
	scanf("%u%d",&number,&position);
	printf("%d\n",rotate(number,position));
	return 0;
}
int rotate(unsigned int val,int pos)
{
	int number=val;
	int binum=0;
	int exp=1;
	int bistart;
	int start;
	int biend;
	int end=0;
	int constbiend;
	int constend;
	int count=0;
	int numforcount;
	int startcount=0;
	int endcount=0;
	int conststart;
	while(val!=0)
	{
		binum+=val%2*exp;
		val/=2;
		exp*=10;
	}
	exp=1;
	numforcount=binum;
	while(numforcount!=0)
	{
		numforcount/=10;
		++count;
	}
	endcount=count;
	biend=binum;
	while(endcount>pos)
	{
		
		biend/=10;
		--endcount;
	}
	startcount=count-endcount;
	exp=1;
	while(biend!=0)
	{
		end+=biend%10*exp;
		exp*=10;
		biend/=10;
	}
	constbiend=end;
	biend=0;
	exp=1;
	while(end!=0)
	{
		biend+=end%2*exp;
		exp*=2;
		end/=2;
	}
	int biend1=biend;
	for (int i=0;i<startcount;i++)
		biend*=10;
	exp=1;
	end=0;
	while(biend!=0)
	{
		end+=biend%10*exp;
		biend/=10;
		exp*=2;
	}
	start=number&~end;
	conststart=start;
	exp=1;
	bistart=0;
	while (start!=0)
	{
		bistart+=start%2*exp;
		start/=2;
		exp*=10;
	}
	for (int i=0;i<pos;i++)
		bistart*=10;
	exp=1;
	start=0;
	while(bistart!=0)
	{
		start+=bistart%10*exp;
		bistart/=10;
		exp*=2;
	}
	exp=1;
	int end1=0;
	while(biend1!=0)
	{
		end1+=biend1%10*exp;
		biend1/=10;
		exp*=2;
	}
	return start|end1;
}


