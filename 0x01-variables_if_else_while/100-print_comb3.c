#include <stdio.h>

/**
 * main - function to print combination of two numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '8')
	{
		while (j <= '9')
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (!(i == '8' && j == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
putchar('\n');
return (0);
}
