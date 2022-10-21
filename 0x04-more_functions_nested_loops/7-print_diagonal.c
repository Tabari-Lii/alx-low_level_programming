#include "main.h"

/**
 * print_line prints a line
 *
 * Return: does not return anything
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if ((n == 0) || (n < 0))
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == 0)
				{
					_putchar('\\');
					_putchar('\n');
					continue;
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	return;
}
