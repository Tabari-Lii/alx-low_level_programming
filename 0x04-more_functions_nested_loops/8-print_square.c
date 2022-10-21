#include "main.h"

/**
 * print_line prints a line
 *
 * Return: does not return anything
 */
void print_square(int n)
{
	int i, j;
	
	if ((n == 0) || (n < 0))
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
		}

		_putchar('\n');
	}
	return;
}
