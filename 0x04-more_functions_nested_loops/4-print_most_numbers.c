#include "main.h"

/**
 * print_number prints digits from 0 t0 10
 *
 * Return: does not return anything
 */
void print_more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i ==4))
		{
			continue;
		}
		_putchar(i);
	}

	_putchar('\n');

	return;
}
