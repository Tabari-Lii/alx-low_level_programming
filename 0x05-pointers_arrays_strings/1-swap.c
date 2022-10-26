#include "main.h"

/**
 * swap_int Swaps the values of 2 intergers
 * @a: First argument to be swapped.
 * @b: second argument to be swapped.
 *
 * Return:Void.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return ;
}
