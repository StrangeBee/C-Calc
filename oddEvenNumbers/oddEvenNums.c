#include <stdio.h>

/**
 * main - prints odd and even numbers.
 *
 * return: 0
 */

int evenNums;
int oddNums;
int selected;
int i;

int main(void)
{
	printf("Please select an option:\n(1)Odd Numbers\n(2)Even Numbers \n");
	scanf("%d", &selected);

	if (selected == 2){
		for (i = 10; i <= 100; i += 2)
		{
			printf("Even Numbers are: %d\n", i);
		}
	}
	else if (selected == 1)
	{
		int i = 1;
		do {
			printf("Odd Numbers are: %d\n", i);
			i += 2;
		}
		while (i < 100);
	}
	else
	{
		printf("Please enter a valid input!!!\n");
	}
}
