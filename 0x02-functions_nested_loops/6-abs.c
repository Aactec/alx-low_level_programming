#include "main.h"

/**
 * _abs - function that computes the absolute value of an int
 * Description: The standard library provides a similar funct..
 *
 * @c: The number to be computed.
 *
 * Return: (0)
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
