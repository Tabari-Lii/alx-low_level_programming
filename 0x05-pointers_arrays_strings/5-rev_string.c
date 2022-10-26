#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the inputtered string
 * Return: void
 */
void rev_string(char *s)
{
	int count = 0, i, i;
	char *str, tenp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count ++;
	}

	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			(str + j) = (str + (i - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
