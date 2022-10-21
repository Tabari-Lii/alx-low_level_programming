#include "main.h"

/**
 * _isdigit - check main
 * @c: An input digit
 * loops through all the digits feom 0 to 9
 * compare @c with aloop var
 * Return: 1 if is digit otherwise 0
 */
int _isdigit(int c)
{
	int i;
	int val;

	for (i = 0; i < 10; i++)
	{
		if (c == 1)
		{
			val = 1;
		}
		else
		{
			val = 0;
		}
	}
	return (val);
}
