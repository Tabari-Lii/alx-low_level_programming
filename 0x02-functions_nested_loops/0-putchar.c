#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	for (i; i<8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
