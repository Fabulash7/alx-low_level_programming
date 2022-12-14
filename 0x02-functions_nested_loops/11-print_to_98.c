#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all numbers from input to 98
 * @a: the starting number
 */
void print_to_98(int a)
{
	if (a >= 98)
	{
		while (a > 98)
			printf("%d,", a--);
		printf("%d\n", a);
	}
	else
	{
		while (a < 98)
			printf("%d,", a++);
		printf("%d\n", a);
	}
}
