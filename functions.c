#include "functions.h"
#include "funcstatics.h"

void power(double p , double q)
{
	double result = 1.0;
	for(int i=0; i<q; i++)
	{
		result *= p;
	}
	printf("%lf ^ %lf= %lf\n",p,q,result);
}

void summ(double p, double q)
{
	printf("%lf + %lf = %lf\n", p , q, p+q);
}

void mult(double p, double q)
{
	printf("%lf * %lf = %lf\n",p,q,p*q);
}

void rem(double p, double q)
{
	printf("%lf / %lf = %lf\n",p,q,p / q);
}
