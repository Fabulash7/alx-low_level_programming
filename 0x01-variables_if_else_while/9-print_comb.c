#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int m = 0;

	while (m < 10)
	{
		putchar(48 + m);
		if (m != 9)
		{
			putchar(',');
			putchar(' ');
		}
		m++;
	}

	putchar('\n');

	return (0);

}
