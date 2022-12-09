#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int numb;
	int pa;

	for (numb = 0; numb < 10; numb++)
		putchar((numb % 10) + '0');

	for (pa = 'a'; pa <= 'f'; pa++)
		putchar(pa);

	putchar('\n');

	return (0);

}
