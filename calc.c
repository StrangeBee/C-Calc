#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
	int form;
	double squareroot;
	double power;
	double base;

	printf("\nInput an option: (1) Square (2) Power:");
	scanf("%d", &form);

	if (form == 1)
	{
		printf("\nPlease enter your digit:\n");
		scanf("%lf", &squareroot);

		squareroot = sqrt(squareroot);
		printf("The square root is: %.1lf", squareroot);
	}
	else if (form == 2)
	{
		printf("\nPlease input base:\n");
		scanf("%lf", &base);
		printf("\nPlease input power:\n");
		scanf("%lf", &power);

		power = pow(base, power);
		printf("The power is: %.1lf", power);
	}
	else
	{
		printf("\nInvalid entry\n");
	}


	return (0);
}
