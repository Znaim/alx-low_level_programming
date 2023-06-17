#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if a number is positive negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand();

    printf("Last digit of %d is ", n);

    int lastDigit = n % 10;

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
