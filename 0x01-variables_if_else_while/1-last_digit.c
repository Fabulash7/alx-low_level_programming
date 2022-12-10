#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
	if (p > 5)
		printf("%d and is greater than 5\n", n);
	else if (p == 0)
		printf("%d and is 0\n", n);
	else if (p < 6)
		printf("%d and is less than 6 and not 0\n", n);
	return (0);

}
