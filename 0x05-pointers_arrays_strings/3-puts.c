#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: is a string input.
 * Returns: void.
 */
void _puts(char *str)
{
	int count = 0;

	while (count >=0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count ++;
	}
}
