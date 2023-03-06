#include <stdio.h>

/**
 * main - checks if user is eligible to cast a vote.
 *
 * Return: 0
 */

int myAge;
const int eligibleAge = 25;

int main(void)
{
	printf("Please enter your age to continue: \n");
	scanf("%d", &myAge);

	if (myAge == eligibleAge || myAge > eligibleAge)
	{
		printf("\nYou are eligible to vote... \n");
	}
	else
	{
		printf("\nSorry! You can't vote at this time... \n");
	}
}
