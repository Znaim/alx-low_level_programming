#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if a number is greater than  or zero or less than  and not
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() % 100; /* Generate random number between 0 and 99 (inclusive) */

	printf("Last digit of %d is ", n);

	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is 0\n", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}

	return (0);
}
