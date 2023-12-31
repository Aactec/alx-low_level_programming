#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer parameter
 *
 * Return: always 0
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (1 / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
