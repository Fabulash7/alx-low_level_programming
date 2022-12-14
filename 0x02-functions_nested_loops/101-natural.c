#include <stdio.h>

/**
 * main - lists all the natural numbers below 1024 (excluded)
 * prints sum that are multiples of 3 0r 5
 * Retrun: Always 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	printf("%d\n", sum);

	return (0);
}
