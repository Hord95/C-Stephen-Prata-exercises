#include <stdio.h>
#include <math.h>

void transform(double source[],double destiny[],int size,double (* func)(double x));
double twice(double x);
double plustwo(double x);

int main(void)
{
    int x=20;
    double source[x];
    for (int i=0;i<x;i++)
        *(source+i)=i;
    double dest[x];
    transform(source,dest,x,sin);
    for (int i=0;i<x;i++)
    printf("%lf\n",dest[i]);
    transform(source,dest,x,cos);
    for (int i=0;i<x;i++)
    printf("%lf\n",dest[i]);
    transform(source,dest,x,twice);
    for (int i=0;i<x;i++)
    printf("%lf\n",dest[i]);
    transform(source,dest,x,plustwo);
    for (int i=0;i<x;i++)
    printf("%lf\n",dest[i]);
    return 0;
}
void transform(double source[],double * destiny,int size,double (* func)(double x))
{
    for (int i=0;i<size;i++)
        *(destiny+i)=(*func)(source[i]);
}
double twice (double x)
{
    return x*2;
}
double plustwo(double x)
{
    return x+2;
}