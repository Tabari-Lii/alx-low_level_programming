#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, e_var, q_var;

	e_var = 'e';
	q_var = 'q';
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != e_var && c != q_var)
		putchar(c);
	}
	putchar('\n');
	return (0);
}
