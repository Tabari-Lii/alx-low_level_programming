#include "main.h"

/**
 * print_number prints digits from 0 t0 10
 *
 * Return: does not return anything
 */
void more_numbers(void)
{
	int i;
	int val;

	for (i = 0; i < 10; i++)
	{
		for (val = 0; val < 15; val++)
		{
			_putchar(val);
		}
	}

	_putchar('\n');

	return;
}
