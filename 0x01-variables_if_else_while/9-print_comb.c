#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
		putchar(m);
		if (m != 57)
			putchar(',');
			putchar(' ');

	putchar('\n');

	return (0);

}
