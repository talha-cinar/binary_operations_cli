#include "static_libc.h"
#include "functions.h"

int main(int argc, char *argv[])
{
	if(argc !=4)
	{
		printf("Please provide 3 arguments\n");
		return 1;
	}
	double p = strtod(argv[1],NULL);
	double q = strtod(argv[2],NULL);

	switch (*argv[3])
	{
		case '^':
			power(p,q);
			break;
		case '+':
			summ(p,q);
			break;
		case 'm':
			mult(p,q);
			break;
		case '/':
			rem(p,q);
			break;
		default:
			printf("unsupported binary operation\n");
	}
	return 0;
}
