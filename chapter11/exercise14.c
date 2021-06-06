#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv)
{
    double num;
    int degree;
    double result=1;
    num=atof(argv[1]);
    degree=atoi(argv[2]);    
    for (int i=1;i<=degree;i++)
        result*=num;
    printf("%lf",result);
}