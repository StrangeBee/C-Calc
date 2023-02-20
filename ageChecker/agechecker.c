#include <stdio.h>

int main(void)
{

	int age;

	printf("Welcome! Please enter your age:");
	scanf("%d", &age);

	if (age < 18)
	{
		printf("\nSorry! You are not eligible for this programme!\n")
	}
	else
	{
		printf("\nCongratulations! Welcome on board!\n");
	}
}
