#include "main.h"

/**
 * _isupper - check main
 * @c: An input character
 * Description: function uses _putchar function to print
 * loop through all uppercase alphabets
 * compare @c with loop var
 * Return: 1 if is uppercase or 0 if its lowercase
 */
int _isupper(char c)
{
	char i;

	for (i = "A"; i <= "Z"; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
