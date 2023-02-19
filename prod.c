#include <stdio.h>

int main(void)
{
	int quantity;
	int amount;
	int total;

	printf("\nPlease enter quantity:\n");
	scanf("%d", &quantity);
	printf("\nPlease enter amount:\n");
	scanf("%d", &amount);

	total = quantity * amount;

	if (total > 500)
	{
		total = (total - (total * 10 / 100));
		printf("\nYour total amount is: %d", total);
	}
	else
	{
		printf("\nYour total amount is: %d", total);
	}
}
